#include <stdio.h>


int main()
{
    double salario, novosalario, reajuste;
    printf("informe o salario do funcionario:");
    scanf("%lf", &salario);
    reajuste = salario/100;
    novosalario = salario + reajuste;
    printf("novo salario e: %.2lf\n", novosalario);
    return 0;
}
