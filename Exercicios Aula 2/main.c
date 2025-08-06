#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    float media;

    printf("Informe sua nota do primeiro semestre:\n");
    scanf("%d" , &num1);
    printf("informe sua nota do segundo semestre:\n");
    scanf("%d" , &num2);
    media = (float)(num1 + num2) /2;
    printf("A media e: %.2f\n", media);

    system("pause");
    return 0;
}
