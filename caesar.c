#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

bool is_valid_key(string s);
string caesar_cipher(string plaintext, int key);

int main(int argc, string argv[])
{
    if (argc != 2 || !is_valid_key(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    string ciphertext = caesar_cipher(plaintext, key);
    printf("ciphertext: %s\n", ciphertext);

    return 0;
}

bool is_valid_key(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

string caesar_cipher(string plaintext, int key)
{
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char base = isupper(plaintext[i]) ? 'A' : 'a';
            plaintext[i] = (plaintext[i] - base + key) % 26 + base;
        }
    }
    return plaintext;
}
