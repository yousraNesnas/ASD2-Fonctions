#include <stdio.h>

void DIVISE(int a, int b)
{
    do
    {
        a = a - b;
    } while (a >= b);

    if (a == 0)
    {
        printf("%d divise %d\n", a, b);
    }
    else
    {
        printf("%d ne divise pas %b\n", a, b);
    }
}

int main()
{
    int a, b;
    int t[10];

    printf("Give 2 numbers a && b\n");
    scanf("%d %d", &a, &b);

    DIVISE(a, b);

    printf("fill in your table\n");
    for (int i = 0; i <= 10; i++)
    {
        scanf("%d", &t[i]);
        DIVISE(t[i], b);
    }
}