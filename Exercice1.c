#include <stdio.h>

int MAXIMUM(int a, int b)
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}

int main()
{
    int a, b, max;
    printf("Give 2 numbers a && b\n");
    scanf("%d %d", &a, &b);

    max = MAXIMUM(a, b);

    printf("Max is :  %d\n", max);

    int c;

    printf("Give a third number pls, C =\n");
    scanf("%d", &c);

    if (c > MAXIMUM(a, b))
    {
        max = c;
    }
    else
    {
        max = MAXIMUM(a, b);
    }

    printf("Max between a, b and c is %d", max);
}