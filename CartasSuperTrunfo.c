#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis para armazenar os dados da Carta 1
    char estado1;
    char codigo1[4];
    char nome_cidade1[100];
    unsigned long int populacao1;  // Mudança para unsigned long int
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;
    
    // Variáveis para armazenar os dados da Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[100];
    unsigned long int populacao2;  // Mudança para unsigned long int
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;
    
    // Variáveis para armazenar resultados das comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;
    
    // Apresentação do programa
    printf("=== SUPER TRUNFO DE PAÍSES - NÍVEL MESTRE ===\n");
    printf("Batalha de cartas com sistema de comparação completo!\n");
    printf("Você irá cadastrar duas cartas e elas irão batalhar!\n\n");
    
    // === CADASTRO DA CARTA 1 ===
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Formato para unsigned long int
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos para a Carta 1
    densidade_populacional1 = (float)populacao1 / area1;  // Conversão de tipo
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;  // Conversão de tipo
    
    // Cálculo do Super Poder (soma de todos os atributos + inverso da densidade)
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    
    printf("\n");
    
    // === CADASTRO DA CARTA 2 ===
    printf("--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Formato para unsigned long int
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a Carta 2
    densidade_populacional2 = (float)populacao2 / area2;  // Conversão de tipo
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;  // Conversão de tipo
    
    // Cálculo do Super Poder (soma de todos os atributos + inverso da densidade)
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);
    
    printf("\n");
    
    // === EXIBIÇÃO DOS DADOS CADASTRADOS ===
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\n");
    
    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    printf("\n");
    
    // === COMPARAÇÃO DAS CARTAS ===
    printf("=== BATALHA DAS CARTAS - COMPARAÇÕES ===\n\n");
    
    // Comparação da População (maior vence)
    resultado_populacao = populacao1 > populacao2;
    printf("População: ");
    printf("Carta 1 venceu (%d)\n", resultado_populacao);
    
    // Comparação da Área (maior vence)
    resultado_area = area1 > area2;
    printf("Área: ");
    printf("Carta 1 venceu (%d)\n", resultado_area);
    
    // Comparação do PIB (maior vence)
    resultado_pib = pib1 > pib2;
    printf("PIB: ");
    printf("Carta 1 venceu (%d)\n", resultado_pib);
    
    // Comparação dos Pontos Turísticos (maior vence)
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    printf("Pontos Turísticos: ");
    printf("Carta 1 venceu (%d)\n", resultado_pontos_turisticos);
    
    // Comparação da Densidade Populacional (menor vence - regra especial)
    resultado_densidade = densidade_populacional1 < densidade_populacional2;
    printf("Densidade Populacional: ");
    printf("Carta 1 venceu (%d)\n", resultado_densidade);
    
    // Comparação do PIB per Capita (maior vence)
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: ");
    printf("Carta 1 venceu (%d)\n", resultado_pib_per_capita);
    
    // Comparação do Super Poder (maior vence)
    resultado_super_poder = super_poder1 > super_poder2;
    printf("Super Poder: ");
    printf("Carta 1 venceu (%d)\n", resultado_super_poder);
    
    printf("\n=== BATALHA CONCLUÍDA ===\n");
    printf("Legenda: 1 = Carta 1 venceu | 0 = Carta 2 venceu\n");
    printf("Regra especial: Na densidade populacional, menor valor vence!\n");
    
    return 0;
}