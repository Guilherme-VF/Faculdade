#include <locale.h>
#include <stdio.h>

int main() {

    int participantes;
    int times_necessarios;
    double consumo_kwh;
    double custo_energia;
    double custo_alimentacao;
    double outros_custos;
    double custo_total;
    double custo_por_participante;

    printf("Digite a quantidade de participantes: ");
    scanf("%d", &participantes);

    printf("Digite a quantidade de times necessários: ");
    scanf("%d", &times_necessarios);

    printf("Digite o consumo estimado de energia (kWh): ");
    scanf("%lf", &consumo_kwh);

    printf("Digite o custo da energia (R$): ");
    scanf("%lf", &custo_energia);

    printf("Digite o custo da alimentação (R$): ");
    scanf("%lf", &custo_alimentacao);

    printf("Digite outros custos (R$): ");
    scanf("%lf", &outros_custos);

    
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    
    custo_por_participante = custo_total / participantes;

    printf("\n========= Relatório Techthon =========\n");
    printf("Participantes: %d\n", participantes);
    printf("Times necessários: %d\n", times_necessarios);
    printf("Consumo estimado: %.2f kWh\n", consumo_kwh);
    printf("Custo da energia: R$ %.2f\n", custo_energia);
    printf("Custo da alimentação: R$ %.2f\n", custo_alimentacao);
    printf("Outros custos: R$ %.2f\n", outros_custos);
    printf("CUSTO TOTAL: R$ %.2f\n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n", custo_por_participante);
    printf("======================================\n");

    return 0;
}