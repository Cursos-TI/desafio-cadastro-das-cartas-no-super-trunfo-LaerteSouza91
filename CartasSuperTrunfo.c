#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    long pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados para o primeiro país
    printf("Digite o nome do primeiro país: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população (em milhões): ");
    scanf("%ld", &pop1);

    printf("Digite a área (em milhões de km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em trilhões de dólares): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos famosos: ");
    scanf("%d", &pontos1);

    // Entrada de dados para o segundo país
    printf("\nDigite o nome do segundo país: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população (em milhões): ");
    scanf("%ld", &pop2);

    printf("Digite a área (em milhões de km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em trilhões de dólares): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos famosos: ");
    scanf("%d", &pontos2);

    // Exibindo as cartas dos países
    printf("\n=== Cartas dos Países ===\n");
    printf("\n%s\nPopulação: %ld milhões\nÁrea: %.2f milhões de km²\nPIB: %.2f trilhões\nPontos turísticos: %d\n",
           nome1, pop1, area1, pib1, pontos1);
    printf("\n%s\nPopulação: %ld milhões\nÁrea: %.2f milhões de km²\nPIB: %.2f trilhões\nPontos turísticos: %d\n",
           nome2, pop2, area2, pib2, pontos2);

    return 0;
}
