#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int X, W, Z, E, M, N;
    float F;
    
    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
   
     printf("\nDia: %d\n",dia);
     printf("\nMes: %d\n",mes);
     printf("\nAno: %d\n",ano);
    
    return 0;
}