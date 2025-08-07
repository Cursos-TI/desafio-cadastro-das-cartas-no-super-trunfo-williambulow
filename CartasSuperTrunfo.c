#include <stdio.h>

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
    float densidade_populacional; // para armazenar a densidade populacional 
    float pib_per_capita; // Para armazenar o PIB per Capita
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
        50,                     // Número de pontos turísticos
        8102.47,                // Densidade populacional
        56724.32,               // PIB per Capita 

    };

    // Criando e inicializando a estrutura com os dados fornecidos para Rio de Janeiro
    struct Cidade cidade2 = {
        "B",                    // Estado
        "B02",                  // Código
        "Rio de Janeiro",       // Nome da cidade
        6748000,                // População 
        1182.30,                // Área 
        700.10,                 // PIB 
        60,                     // Número de pontos turísticos 
        5622.24,                // Densidade populacional
        44532.91                // PIB per Capita  
    };

    // Exibindo os dados da cidade de São Paulo
    printf("Carta 1 - Detalhes de %s\n", cidade1.nome);
    printf("Estado: %s\n", cidade1.estado);
    printf("Codigo: %s\n", cidade1.codigo);
    printf("Populacao: %d\n", cidade1.populacao);
    printf("Area: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhoes de reais\n", cidade1.pib);
    printf("Numero de Pontos Turisticos: %d\n", cidade1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n" , cidade1.densidade_populacional);
    printf("PIB per Capita %.2f reais\n" , cidade1.pib_per_capita);
    
    printf("\n");

    // Exibindo os dados da cidade do Rio de Janeiro
    printf("Carta 2 - Detalhes de %s\n", cidade2.nome);
    printf("Estado: %s\n", cidade2.estado);
    printf("Codigo: %s\n", cidade2.codigo);
    printf("Populacao: %d\n", cidade2.populacao);
    printf("Area: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f bilhoes de reais\n", cidade2.pib);
    printf("Numero de Pontos Turisticos: %d\n", cidade2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f\n" , cidade2.densidade_populacional);
    printf("PIB per Capita %.2f reais\n" , cidade2.pib_per_capita);

    return 0;
}
