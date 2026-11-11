#include <stdio.h>
#include <math.h>
    
    int main() {
    float n1, n2, media, frequencia;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite sua frequencia nas aulas: ");
    scanf("%f", &frequencia);
    
    media = (n1 + n2) / 2;
    
    
    if (frequencia < 75.0) {
        printf("Status: Reprovado por frequencia!\n");
    } else if (media >= 6.0) {
        printf("Status: Aprovado! Parabéns!\n");
    } else {
        printf("Status: Reprovado por nota! Tente estudar mais na próxima.\n");
    }
    
    printf("Sua média foi de: %.2f\n", media);
    printf("Sua frequencia foi de: %.2f%%\n", frequencia);
    
    return 0;
}