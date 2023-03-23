#include <stdio.h>

 int mult(int a, int b)
{
    if (a % b == 0)
    {
        printf("%d est mutiple de %d\n", a, b);
        return 1;
    }
    else
    {
        printf("%d n'est pas mutiple de %d\n", a, b);
        return 0;
    }
}

int main()
{
    int a, c, d;

    scanf("%d", &a);
    c = mult(a, 2);
    d = mult(a, 3);

    if (c == 1 && d == 1)
    {
        printf("%d est multiple de 6",a);
    }
}