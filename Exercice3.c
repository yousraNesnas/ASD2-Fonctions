#include <stdio.h>

int VABS(int a)
{
    if (a < 0)
    {
        a = a * -1;
    }
    return a;
}

int main()
{
    int a, v, max, s = 0;
    int t[10];

    printf("a = ");
    scanf("%f", &a);

    v = VABS(a);
    printf("la valeur absolue de %d est %d\n", a, v);

    printf("fill in your table\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &t[i]);
    }
    // find max:
    max = t[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < t[i])
        {
            max = t[i];
        }
    }

    printf("MAX = %d\n", max);

    for (int i = 0; i < 10; i++)
    {
        if (t[i] != max)
        {
            s = s + VABS(t[i]);
        }
    }

    printf("La somme est: %d", s);
}