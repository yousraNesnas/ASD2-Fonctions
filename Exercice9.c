#include <stdio.h>
#include <string.h>

void miroir(char chaine[])
{
    if (strlen(chaine) == 0)
    {
        return;
    }
    else
    {
        printf("%c", chaine[strlen(chaine) - 1]);
        // putchar(chaine[strlen(chaine) - 1]);
        chaine[strlen(chaine) - 1] = '\0';
        miroir(chaine);
    }
}

int main()
{
    char chaine[100];
    printf("Entrez une chaine : ");
    scanf("%s", chaine);
    printf("La chaine miroir est : ");
    miroir(chaine);
    printf("\n");
    return 0;
}