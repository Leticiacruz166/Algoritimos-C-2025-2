#include <stdio.h>
#include <math.h>

int main()
{
    double angulo, seno, cosseno, tangente;
    printf("informe o valor do angulo:");
    scanf("%lf", &angulo);
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("seno: %.21lf\n", seno);
    printf("cosseno: %.2lf\n", cosseno);
    printf("tangente: %.2lf\n", tangente);
    return 0;
}
