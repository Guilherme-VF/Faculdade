#include <stdio.h>

int main() {
    float media, frequencia;

    printf("Digite sua frequencia: ");
    scanf("%f", &frequencia);

    printf("Digite sua media: ");
    scanf("%f", &media);

    if (frequencia < 75) {
        printf("Reprovado por falta.\n");
    } else if (media >= 6) {
        printf("Voce foi aprovado!\n");
    } else {
        printf("Reprovado por media.\n");
    }

    return 0;
}









