#include <stdio.h>
#include <stdlib.h>

int main()
{
    double real, porcentagem;
    printf("calcule o valor informado:");
    scanf("%lf", &real);
    porcentagem = real * 0.04;
    printf("o valor de e: %2.lf\n", porcentagem);
    return 0;
}
