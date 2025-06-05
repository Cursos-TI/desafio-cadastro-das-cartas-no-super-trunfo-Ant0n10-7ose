#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // Array de caracteres para armazenar o código (ex: A01)
    char nome_cidade1[50]; // Array para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Nova variável para densidade populacional
    float pib_per_capita1; // Nova variável para PIB per capita
    
    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2; // Nova variável para densidade populacional
    float pib_per_capita2; // Nova variável para PIB per capita
    
    // Instruções para o usuário
    printf("=== CADASTRO DE CARTAS DO SUPER TRUNFO DE PAÍSES ===\n\n");
    
    // Leitura dos dados da Carta 1
    printf("CARTA 1:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a população (habitantes): ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidade_populacional1 = populacao1 / area1;
    
    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    // e depois dividindo pela população para obter o PIB per capita
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    
    // Leitura dos dados da Carta 2
    printf("\nCARTA 2:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Digite a população (habitantes): ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidade_populacional2 = populacao2 / area2;
    
    // Convertendo PIB de bilhões para reais (multiplicando por 1.000.000.000)
    // e depois dividindo pela população para obter o PIB per capita
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    // Exibição dos dados das cartas com os novos cálculos
    printf("\n=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    return 0;
}