#include <stdio.h>

int main(void)
{
    int change;

    // Prompt user for a valid amount of change
    do
    {
        printf("Change owed: ");
        if (scanf("%d", &change) != 1)
        {
            // Clear input buffer in case of non-integer input
            while (getchar() != '\n');
            change = -1;
        }
    } while (change <= 0);

    int coins = 0;
    int denominations[] = {25, 10, 5, 1};
    int numDenominations = sizeof(denominations) / sizeof(denominations[0]);

    
    for (int i = 0; i < numDenominations; i++)
    {
        coins += change / denominations[i];
        change %= denominations[i];
    }

    printf("%d\n", coins);
    return 0;
}
