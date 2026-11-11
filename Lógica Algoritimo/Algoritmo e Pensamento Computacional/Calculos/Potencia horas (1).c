#include <stdio.h>

int main()
{
    
    int potencia, horas_dia; 
    float consumo;
    
    printf(" Qual potência do equipamento W?: ");
    scanf("%d",&potencia);
    
    printf("E quanto de horas de uso por dia?: ");
    scanf("%d",&horas_dia);
    
    consumo = (float)(potencia*horas_dia*30)/1000.f;
    
    printf("Consumo mensal:  %2.f", consumo);

    return 0;
}
