#include <stdio.h>

int main()
{
    int a, b, c, x;
    printf("informe um valor de a:");
    scanf("%d", &a);
    printf("informe um valor de b:");
    scanf("%d", &b);
    printf("informe um valor de c:");
    scanf("%d", &c);
    x = 2 * ((a - c)/8) - b * 5;
    printf("valor de x: %d\n", x);
    return 0;
}
