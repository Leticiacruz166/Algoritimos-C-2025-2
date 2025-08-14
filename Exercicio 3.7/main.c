#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorfabrica, imposto, distribuidor, valorfinal;
    printf("informe o valor do carro:");
    scanf("%lf", &valorfabrica);
    distribuidor = valorfabrica * 0.28;
    imposto = valorfabrica * 0.45;
    valorfinal = valorfabrica + distribuidor + imposto;
    printf("O valor do carro e: %2.lf", valorfinal);
    return 0;
}
