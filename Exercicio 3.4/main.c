#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ex 4 e 5
    double nota1, nota2, nota3, media;
    printf("informe suas notas:");
    scanf("%lf" "%lf" "%lf", &nota1, &nota2, &nota3);
    //media = (nota1 + nota2 + nota3) /3;
    media = (nota1*2 + nota2*3 + nota3*5) / 10;
    printf("A nota do aluno e: %2.lf", media);
    return 0;
}
