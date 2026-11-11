#include <stdio.h>

int main()
{
    
    int hora, minutos, total;
    
    printf(" Quantas hora?: ");
    scanf("%d",&hora);
    
    printf("E quantos minutos?: ");
    scanf("%d",&minutos);
    total = hora * 60 + minutos;
    printf("São em minutos:  %d", total);

    return 0;
}
