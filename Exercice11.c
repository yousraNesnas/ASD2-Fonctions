void decalage_circulaire_droite(int *tab, int n)
{
    // Si le tableau est vide ou ne contient qu'un élément, il n'y a rien à faire
    if (n <= 1)
    {
        return;
    }

    // Stockage de la dernière valeur du tableau
    int dernier = tab[n - 1];

    // Appel récursif sur les n-1 premiers éléments du tableau
    decalage_circulaire_droite(tab, n - 1);

    // Déplacement des n-2 premiers éléments vers la droite
    for (int i = n - 2; i >= 0; i--)
    {
        tab[i + 1] = tab[i];
    }

    // Placement de la dernière valeur du tableau à la première position
    tab[0] = dernier;
}
