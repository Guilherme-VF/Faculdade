#include <stdio.h>

int main()
{
    int desempenho[9] = {0};
    int desempenhototal = 0;
    float media;

    for (int i = 1; i < 9; i++)
    {
        printf("Digite o desempenho %d: ", i);
        scanf("%d", &desempenho[i]);

        desempenhototal += desempenho[i];
    }

    for (int i = 1; i < 9; i++)
    {
        printf("Funcionário %d: %d\n", i, desempenho[i]);
    }

    media = desempenhototal / 8.0;

    printf("Desempenho total: %d\n", desempenhototal);
    printf("Média: %.2f\n", media);

    return 0;
}
