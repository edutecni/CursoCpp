#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, soma;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("Soma: %d \n", soma);
    
    return 0;
}