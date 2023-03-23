#include <stdio.h>
#include <string.h>
int palindrome(char c[])
{
    for (int i = 0, j = strlen(c)-1; i < (strlen(c)-1 / 2); i++, j--)
    {
        if (c[i] != c[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char c[100];
    printf("Give me a word :");
    scanf("%s", &c);

    int a = palindrome(c);
    if (a == 1)
    {
        printf("Le mot %s est palindrome.", c);
    }
    else
    {
        printf("Le mot %s n'est pas palindrome.", c);
    }
}