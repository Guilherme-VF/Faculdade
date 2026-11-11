#include <stdio.h>

int main()
{
    
    int manha, tarde, soma;
    
    printf("Quantidade recebida pela manhã?: ");
    scanf("%d",&manha);
    
    printf("Quantidade recebida pela tarde?: ");
    scanf("%d",&tarde);
    soma = manha + tarde;
    printf("Total de produtos recebidos no dia: %d", soma);

    return 0;
}
