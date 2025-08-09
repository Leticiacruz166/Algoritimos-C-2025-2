#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, ano = 365, anosvividos;
    printf("informe sua idade:");
    scanf("%d", &idade);
    anosvividos = idade * ano;
    printf("voce viveu: %d", anosvividos);
    return 0;
}
