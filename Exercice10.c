#include <stdio.h>

int first = -1; // variable globale pour stocker la première position du bit 1
int last = -1;  // variable globale pour stocker la dernière position du bit 1

void estVecteurBinaire(int n, int V[])
{
    for (int i = 0; i < n; i++)
    {
        if (V[i] != 0 && V[i] != 1)
        {
            printf("Le vecteur n'est pas binaire.\n");
            return;
        }
    }
    printf("Le vecteur est binaire.\n");
}

void remplaceBitVecteur(int n, int V[])
{
    for (int i = 0; i < n; i++)
    {
        if (V[i] == 0)
        {
            V[i] = 1;
        }
        else
        {
            V[i] = 0;
        }
    }
}

void premierDernierBit1(int n, int V[])
{
    first = -1;
    last = -1;
    for (int i = 0; i < n; i++)
    {
        if (V[i] == 1)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
}

int poidsVecteur(int n, int V[])
{
    premierDernierBit1(n, V);
    int poids = last - first + 1;
    return poids;
}

int main()
{
    int matrice[5][5];
    int MatLigne[5];
    int PoidsLignes[5];

    // Demande de remplir la matrice
    printf("Remplir la matrice (0 ou 1) :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ligne %d : ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrice[i][j]);
        }
        estVecteurBinaire(5, matrice[i]);
        MatLigne[i] = matrice[i][0] * 10000 + matrice[i][1] * 1000 + matrice[i][2] * 100 + matrice[i][3] * 10 + matrice[i][4];
        PoidsLignes[i] = poidsVecteur(5, matrice[i]);
    }

    // Calcule les poids de chaque ligne de la matrice
    printf("Poids de chaque ligne : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", PoidsLignes[i]);
    }
    printf("\n");

    // Remplace les 1 de la dernière ligne de la matrice par 0 et vice-versa
    remplaceBitVecteur(5, matrice[4]);

    // Affiche la matrice et le tableau PoidsLignes
    printf("Matrice : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d %d %d %d %d\n", matrice[i][0], matrice[i][1], matrice[i][2], matrice[i][3], matrice[i][4]);
    }
    printf("Poids de chaque ligne : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", PoidsLignes[i]);
    }
    printf("\n");

    return 0;
}