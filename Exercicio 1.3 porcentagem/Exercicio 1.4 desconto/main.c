#include <stdio.h>

int main()
{
    double preco, desconto, novopreco;
    printf("informe o preco do produto:");
    scanf("%lf", &preco);
    desconto = preco * 0.09;
    novopreco = preco - desconto;
    printf("novo preco: %.2lf\n", novopreco);
    return 0;
}
