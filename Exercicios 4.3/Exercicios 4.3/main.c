#include <stdio.h>
#include <math.h>

int main()
{
    double num, quadrado, cubo;
    printf("Informe um numero:");
    scanf("%lf", &num);
    quadrado = pow(num, 2); //quando vai somar o numero como o quadro s� coloca ele no 2 na fun��o pow
    cubo = pow(num, 3);
    printf("quadrado: %.2lf\ncubo: %.2lf", quadrado, cubo);
    return 0;
}
