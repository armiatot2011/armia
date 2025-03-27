#include <stdio.h>

int get_height()
{
    int height;
    do
    {
        printf("Height: ");
        if (scanf("%d", &height) != 1)
        {
            while (getchar() != '\n');
            height = -1;
        }
    } while (height <= 0);
    return height;
}


void print_pyramid(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    int height = get_height();
    print_pyramid(height);
    return 0;
}
