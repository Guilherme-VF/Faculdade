#include <stdio.h>

int main()
{
    char cpf[12];
    double preco, totalCompra = 0.0;

    printf("Digite o CPF do cliente: ");
    scanf("%11s", cpf);

    do {
        printf("Digite o preco do produto ou 0 para finalizar: ");
        scanf("%lf", &preco);

        if (preco > 0) {
            totalCompra += preco;
        }

    } while (preco != 0);

    printf("\nCompra encerrada!\n");
    printf("CPF: %s\n", cpf);
    printf("O total da compra foi: R$ %.2lf\n", totalCompra);

    return 0;
}