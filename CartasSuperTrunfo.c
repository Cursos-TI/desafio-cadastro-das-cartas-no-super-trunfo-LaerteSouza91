#include <stdio.h>

// Definindo a estrutura para a carta do país
struct CartaPais {
    char nome[50];
    int populacao;    // em milhões
    float pib;        // em trilhões de dólares
    float area;       // em milhões de km²
};

int main() {
    struct CartaPais pais1, pais2;

    // Leitura dos dados do primeiro país
    printf("Digite o nome do primeiro país (sem espaços): ");
    scanf("%s", pais1.nome);

    printf("População (em milhões): ");
    scanf("%d", &pais1.populacao);

    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &pais1.pib);

    printf("Área (em milhões de km²): ");
    scanf("%f", &pais1.area);

    // Leitura dos dados do segundo país
    printf("\nDigite o nome do segundo país (sem espaços): ");
    scanf("%s", pais2.nome);

    printf("População (em milhões): ");
    scanf("%d", &pais2.populacao);

    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &pais2.pib);

    printf("Área (em milhões de km²): ");
    scanf("%f", &pais2.area);

    // Comparação do PIB
    printf("\nComparando PIB:\n");
    if (pais1.pib > pais2.pib) {
        printf("%s tem o maior PIB!\n", pais1.nome);
    } else if (pais2.pib > pais1.pib) {
        printf("%s tem o maior PIB!\n", pais2.nome);
    } else {
        printf("Os dois países têm o mesmo PIB!\n");
    }

    return 0;
}
