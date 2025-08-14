#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dezena, aux;
    printf("Informe um numero de 3 digitos:");
    scanf("%d", &num);
    aux = num /10;
    dezena = aux % 10;
    printf("dezena: %d\n", dezena);
    return 0;
}
