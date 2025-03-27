#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word)
{
    int score = 0;
    for (int i = 0, length = strlen(word); i < length; i++)
    {
        if (isalpha(word[i]))
        {
            int index = toupper(word[i]) - 'A';
            score += POINTS[index];
        }
    }
    return score;
}

int main()
{
    char word1[50], word2[50];

    printf("Player 1: ");
    scanf("%49s", word1);
    printf("Player 2: ");
    scanf("%49s", word2);

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
