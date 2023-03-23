
#include <stdio.h>

void F_rec(int n, int *s)
{
    for (int i = 1; i <= n; i++)
    {
        *s = *s + i;
    }
}

int main()
{
    int s = 0, n;
    printf("n =");
    scanf("%d", &n);
    F_rec(n, &s);

    printf("La somme des %d premiers nombre est %d", n, s);
}
