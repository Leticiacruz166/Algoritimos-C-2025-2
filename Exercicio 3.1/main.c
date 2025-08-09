#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, area, perimetro = 2, pi = 3.14159;
    printf("informe o valor da area:");
    scanf("%lf", &raio);
    area = pi * raio*raio;
    perimetro = 2 * pi * raio;
    printf("o valor da area e: %2.lf\n", area);
    printf("o valor do perimetro e: %2.lf", perimetro);

    return 0;
}
