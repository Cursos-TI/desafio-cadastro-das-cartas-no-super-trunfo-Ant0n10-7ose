#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // === DECLARAÇÃO DAS VARIÁVEIS PARA CARTA 1 ===
    char estado1[3];
    char codigo1[4];
    char nome_cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    
    // === DECLARAÇÃO DAS VARIÁVEIS PARA CARTA 2 ===
    char estado2[3];
    char codigo2[4];
    char nome_cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // Apresentação do programa
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n");
    printf("Sistema para comparar duas cartas e determinar a vencedora!\n\n");
    
    // === CADASTRO DA CARTA 1 ===
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos para Carta 1
    densidade_populacional1 = populacao1 / area1;  // Densidade = População / Área
    pib_per_capita1 = pib1 / populacao1;  // PIB per capita = PIB / População
    
    printf("\n");
    
    // === CADASTRO DA CARTA 2 ===
    printf("--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para Carta 2
    densidade_populacional2 = populacao2 / area2;  // Densidade = População / Área
    pib_per_capita2 = pib2 / populacao2;  // PIB per capita = PIB / População
    
    printf("\n");
    
    // === EXIBIÇÃO DOS DADOS CADASTRADOS ===
    printf("=== DADOS DAS CARTAS CADASTRADAS ===\n\n");
    
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.6f bilhões por habitante\n", pib_per_capita1);
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.6f bilhões por habitante\n", pib_per_capita2);
    
    printf("\n");
    
    // === COMPARAÇÃO DAS CARTAS ===
    // ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO: POPULAÇÃO
    // (Esta escolha foi feita no código, conforme solicitado)
    
    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Atributo escolhido para comparação: POPULAÇÃO\n\n");
    
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nome_cidade2, estado2, populacao2);
    
    printf("\nResultado: ");
    
    // Estrutura de decisão para determinar a carta vencedora
    // Para população, a carta com maior valor vence
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        printf("Motivo: %d > %d habitantes\n", populacao1, populacao2);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        printf("Motivo: %d > %d habitantes\n", populacao2, populacao1);
    } else {
        printf("Empate! Ambas as cartas têm a mesma população.\n");
        printf("População igual: %d habitantes\n", populacao1);
    }
    
    printf("\n");
    
    // === COMPARAÇÃO ADICIONAL COM DENSIDADE POPULACIONAL ===
    // Demonstrando a regra especial da densidade populacional
    printf("=== COMPARAÇÃO BÔNUS ===\n");
    printf("Atributo: DENSIDADE POPULACIONAL (menor valor vence)\n\n");
    
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome_cidade1, estado1, densidade_populacional1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome_cidade2, estado2, densidade_populacional2);
    
    printf("\nResultado: ");
    
    // Para densidade populacional, a carta com MENOR valor vence
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 (%s) venceu!\n", nome_cidade1);
        printf("Motivo: %.2f < %.2f hab/km² (menor densidade vence)\n", densidade_populacional1, densidade_populacional2);
    } else if (densidade_populacional2 < densidade_populacional1) {
        printf("Carta 2 (%s) venceu!\n", nome_cidade2);
        printf("Motivo: %.2f < %.2f hab/km² (menor densidade vence)\n", densidade_populacional2, densidade_populacional1);
    } else {
        printf("Empate! Ambas as cartas têm a mesma densidade populacional.\n");
        printf("Densidade igual: %.2f hab/km²\n", densidade_populacional1);
    }
    
    printf("\n=== FIM DA COMPARAÇÃO ===\n");
    printf("Obrigado por usar o sistema de comparação do Super Trunfo!\n");
    
    return 0;
}