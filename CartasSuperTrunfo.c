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
        6992800000,                 // PIB
        50,                     // Número de pontos turísticos


    };

    // Criando e inicializando a estrutura com os dados fornecidos para Rio de Janeiro
    struct Cidade cidade2 = {
        "B",                    // Estado
        "B02",                  // Código
        "Rio de Janeiro",       // Nome da cidade
        6748000,                // População 
        1182.30,                // Área 
        7001000000,                 // PIB 
        60,                     // Número de pontos turísticos 
       
    };

    // Exibindo os dados da cidade de São Paulo
    printf("Carta 1 - Detalhes de %s\n", cidade1.nome);
    printf("Estado: %s\n", cidade1.estado);
    printf("Codigo: %s\n", cidade1.codigo);
    printf("Populacao: %d\n", cidade1.populacao);
    printf("Area: %.2f km2\n", cidade1.area);
    printf("PIB: %.2f bilhoes de reais\n", cidade1.pib);
    printf("Numero de Pontos Turisticos: %d\n", cidade1.num_pontos_turisticos);
    printf("Densidade Populacional:  %.2f hab/km2\n" , cidade1.populacao / cidade1.area);
    printf("PIB per Capita  %.2f Reais\n" , cidade1.pib / cidade1.populacao);

    
    printf("\n");

    // Exibindo os dados da cidade do Rio de Janeiro
    printf("Carta 2 - Detalhes de %s\n", cidade2.nome);
    printf("Estado: %s\n", cidade2.estado);
    printf("Codigo: %s\n", cidade2.codigo);
    printf("Populacao: %d\n", cidade2.populacao);
    printf("Area: %.2f km2\n", cidade2.area);
    printf("PIB: %.2f bilhoes de reais\n", cidade2.pib);
    printf("Numero de Pontos Turisticos: %d\n", cidade2.num_pontos_turisticos);
    printf("Densidade Populacional:  %.2f hab/km2\n" , cidade2.populacao / cidade2.area);
    printf("PIB per Capita  %.2f Reais\n" , cidade2.pib / cidade2.populacao);

    printf("Comparacao de Cartas:\n");
    printf("cidade1.populacao > cidade2.populacao: %d\n", cidade1.populacao > cidade2.populacao);
    printf("Cidade1.area > Cidade2.area: %d\n", cidade1.area > cidade2.area);
    printf("Cidade1.pib > Cidade2.pib: %d\n", cidade1.pib > cidade2.pib);
    printf("pontos turisticos Cidade1 > Cidade2: %d\n", cidade1.num_pontos_turisticos > cidade2.num_pontos_turisticos);
    printf("Densidade Populacional Cidade1 < Cidade2: %d\n", cidade1.populacao / cidade1.area > cidade2.populacao / cidade2.area);
    printf("Super poder da Cidade1 > Cidade2: %d\n",
     cidade1.populacao / cidade1.area - cidade1.populacao + cidade1.pib + cidade1.num_pontos_turisticos + cidade1.area > 
     cidade1.populacao / cidade2.area - cidade2.populacao + cidade2.pib + cidade2.num_pontos_turisticos + cidade2.area );

    return 0;
}
