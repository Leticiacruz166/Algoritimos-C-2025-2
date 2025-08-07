#include <stdio.h>

int main()
{
    int v1, v2, soma, multiplicacao, subtracao, divisao, resto;
    printf("Informe um valor:");
    scanf("%d", &v1);
    printf("Informe um valor:");
    scanf("%d", &v2);
    soma = v1 + v2;
    subtracao = v1 - v2;
    multiplicacao = v1 * v2;
    divisao = v1 / v2;
    resto = v1 % v2;
    printf("soma: %d\n", soma);
    printf("subtracao: %d\n", subtracao);
    printf("multiplicacao: %d\n", subtracao);
    printf("divisao: %d\n", divisao);
    printf("resto: %d\n", resto);
    return 0;
}
