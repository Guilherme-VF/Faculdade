#include <stdio.h>

int main()
{
    
    float peso, altura, total;
    
    printf("Qual é o seu peso em kg?: ");
    scanf("%f",&peso);
    
    printf("E qual é sua altura em metros?: ");
    scanf("%f",&altura);
    
    total = peso/(altura*altura);
    
    printf("O indice de Massa Corporal é:  %2.f kg/m²", total);

    return 0;
}
