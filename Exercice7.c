
#include <stdio.h>

int longChaine(char c[])
{
    int i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    int l;
    char c[100];

    printf("Give me a word: ");
    scanf("%s", &c);

    l = longChaine(c);
    printf("La chaine <%s> est de taille : %d", c, l);
}
