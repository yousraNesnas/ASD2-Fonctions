#include <stdio.h>

int FACT(int a)
{
    int s = 1;
    for (int i = 1; i <= a; i++)
    {
        s = s * i;
    }
    return s;
}

int PUISS(int a, int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p = p * a;
    }
    return p;
}

int main()
{
    int a, n, fa, pui, x, i;
    float s = 0.;

    printf("We want to calculate x^a \n");
    printf("give a =\n");
    scanf("%d", &a);

    printf("give x = \n");
    scanf("%d", &x);
    
    for (i = 1; i <= a; i++)
    {
        s = ((float)s + PUISS(x, i) / (float)FACT(i));
    }
    printf("Somme =  %.2f", s);
    
}