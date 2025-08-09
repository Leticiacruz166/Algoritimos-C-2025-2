#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia, tempo, velocidademedia;
    printf("informe a distancia e o tempo da viagem:");
    scanf("%lf" "%lf", &distancia, &tempo);
    velocidademedia = distancia/tempo;
    printf("A velocidade percorrida e: %2.lf", velocidademedia);
    return 0;
}
