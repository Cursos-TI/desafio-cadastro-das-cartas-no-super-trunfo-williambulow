#include <stdio.h>

// Definindo a estrutura que representará a Carta
struct Cidade {
    char estado[3];          // Para armazenar o estado (A)
    char codigo[4];          // Para armazenar o código (A01)
    char nome[50];           // Para armazenar o nome da cidade (São Paulo)
    int populacao;           // Para armazenar a população (12.325.000)
    float area;              // Para armazenar a área (1521.11 km²)
    float pib;               // Para armazenar o PIB (699.28 bilhões de reais)
    int num_pontos_turisticos; // Para armazenar o número de pontos turísticos (50)
};

int main() {
    // Criando e inicializando a estrutura com os dados fornecidos para São Paulo
    struct Cidade cidade1 = {
        "A",                    // Estado
        "A01",                  // Código
        "São Paulo",            // Nome da cidade
        12325000,               // População
        1521.11,                // Área
        699.28,                 // PIB
        50                      // Número de pontos turísticos
    };

    // Criando e inicializando a estrutura com os dados fornecidos para Rio de Janeiro
    struct Cidade cidade2 = {
        "B",                    // Estado
        "B02",                  // Código
        "Rio de Janeiro",       // Nome da cidade
        6748000,                // População (valor fictício)
        1182.30,                // Área (valor fictício)
        700.10,                 // PIB (valor fictício)
        60                      // Número de pontos turísticos (valor fictício)
    };

    // Exibindo os dados da cidade de São Paulo
    printf("Carta 1 - Detalhes de %s\n", cidade1.nome);
    printf("Estado: %s\n", cidade1.estado);
    printf("Código: %s\n", cidade1.codigo);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões de reais\n", cidade1.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade1.num_pontos_turisticos);

    printf("\n");

    // Exibindo os dados da cidade do Rio de Janeiro
    printf("Carta 2 - Detalhes de %s\n", cidade2.nome);
    printf("Estado: %s\n", cidade2.estado);
    printf("Código: %s\n", cidade2.codigo);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f bilhões de reais\n", cidade2.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade2.num_pontos_turisticos);

    return 0;
}
