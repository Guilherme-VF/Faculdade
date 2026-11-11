#include <stdio.h>
#define PI 3.14159

int main() 
{
    int quanti_cafe;
    float preco, total;
    
    printf("Digite a quantidade de café:\n ");
    scanf("%d", &quanti_cafe);
    
    printf("Digite o preço do café: ");
    scanf("%f", &preco);
    
    total= quanti_cafe*preco;
    
    printf("O valor total da conta será R$ %.2f.", total);
    
    return 0;
}
