#include <cs50.h>
#include <stdio.h>

int main()
{
    string answer = get_string("Enter your name: ");
    printf("hello, %s\n", answer);
    return 0;
}
