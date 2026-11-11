#include <stdio.h>
#include math.h 
int main() {
    float largura, comprimento, valor_caixa;
    float area_total, custo_total;
    int quantidade_caixas;

   
    printf("Qual e a largura da area (em metros)? ");
    scanf("%f", &largura);

    printf("Qual e o comprimento da area em metros? ");
    scanf("%f", &comprimento);

    printf("Qual e o valor de cada caixa? ");
    scanf("%f", &valor_caixa);

 
    area_total = largura * comprimento;
    
   
    quantidade_caixas = ceil(area_total / 2.5);
    
    custo_total = quantidade_caixas * valor_caixa;

  
    printf("\nArea total a ser revestida: %.2f m²\n", area_total);
    printf("Quantidade de caixas necessarias: %d\n", quantidade_caixas);
    printf("Custo total da compra: R$ %.2f\n", custo_total);

    return 0;
}