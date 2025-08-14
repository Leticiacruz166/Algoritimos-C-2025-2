#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dia, mes, ano, aux;
    printf("informe um numero de 6 digitos:");
    scanf("%d", &num);
    dia = num /10000;
    aux = num % 10000;
    mes = aux /100;
    ano = aux %100;
    printf("Dia: %d Mes: %d Ano: %d", dia, mes, ano);
    return 0;
}
