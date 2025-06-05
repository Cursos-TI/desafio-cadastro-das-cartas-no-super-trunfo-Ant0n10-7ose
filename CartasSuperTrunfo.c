#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // === DECLARAÇÃO DAS VARIÁVEIS ===
    // Variáveis para a Carta 1
    char estado1[10], codigo1[10], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;
    
    // Variáveis para a Carta 2
    char estado2[10], codigo2[10], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;
    
    // Apresentação do programa
    printf("========================================\n");
    printf("   SUPER TRUNFO - COMPARAÇÃO DE CARTAS\n");
    printf("     Prática com if e if-else\n");
    printf("========================================\n\n");
    
    // === CADASTRO DA PRIMEIRA CARTA ===
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Estado: ");
    scanf("%s", estado1);
    
    printf("Código da carta: ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);  // Permite espaços no nome
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos automáticos para Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Código da carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos automáticos para Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    
    // === EXIBIÇÃO DOS DADOS ===
    printf("\n========================================\n");
    printf("           CARTAS CADASTRADAS\n");
    printf("========================================\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %s | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões/habitante\n", pib_per_capita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões/habitante\n", pib_per_capita2);
    
    // === COMPARAÇÃO DAS CARTAS ===
    // ATRIBUTO ESCOLHIDO: POPULAÇÃO (definido no código)
    printf("\n========================================\n");
    printf("         BATALHA DAS CARTAS!\n");
    printf("========================================\n");
    
    printf("\nAtributo escolhido para comparação: POPULAÇÃO\n");
    printf("Regra: A carta com MAIOR população vence\n\n");
    
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nome2, estado2, populacao2);
    
    printf("\n--- RESULTADO DA BATALHA ---\n");
    
    // === ESTRUTURA DE DECISÃO COM IF E IF-ELSE ===
    // Esta é a parte principal do exercício: usar if e if-else para comparar
    
    if (populacao1 > populacao2) {
        // Caso 1: Carta 1 tem maior população
        printf("🏆 CARTA 1 VENCEU! 🏆\n");
        printf("Vencedor: %s (%s)\n", nome1, estado1);
        printf("Motivo: %d > %d habitantes\n", populacao1, populacao2);
        printf("Diferença: %d habitantes a mais\n", populacao1 - populacao2);
    } 
    else if (populacao2 > populacao1) {
        // Caso 2: Carta 2 tem maior população  
        printf("🏆 CARTA 2 VENCEU! 🏆\n");
        printf("Vencedor: %s (%s)\n", nome2, estado2);
        printf("Motivo: %d > %d habitantes\n", populacao2, populacao1);
        printf("Diferença: %d habitantes a mais\n", populacao2 - populacao1);
    }
    else {
        // Caso 3: Empate (populações iguais)
        printf("🤝 EMPATE! 🤝\n");
        printf("Ambas as cartas têm a mesma população\n");
        printf("População igual: %d habitantes\n", populacao1);
    }
    
    // === DEMONSTRAÇÃO ADICIONAL COM DENSIDADE POPULACIONAL ===
    // Mostrando a regra especial onde menor valor vence
    printf("\n========================================\n");
    printf("      COMPARAÇÃO BÔNUS - DENSIDADE\n");
    printf("========================================\n");
    
    printf("\nAtributo: DENSIDADE POPULACIONAL\n");
    printf("Regra especial: A carta com MENOR densidade vence\n");
    printf("(Menor densidade = menos congestionamento)\n\n");
    
    printf("Carta 1 - %s: %.2f hab/km²\n", nome1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", nome2, densidade2);
    
    printf("\n--- RESULTADO DA DENSIDADE ---\n");
    
    // Estrutura if-else para densidade (regra invertida)
    if (densidade1 < densidade2) {
        // Carta 1 tem menor densidade (melhor)
        printf("🏆 CARTA 1 VENCEU! 🏆\n");
        printf("Vencedor: %s (menor densidade)\n", nome1);
        printf("Motivo: %.2f < %.2f hab/km²\n", densidade1, densidade2);
    }
    else if (densidade2 < densidade1) {
        // Carta 2 tem menor densidade (melhor)
        printf("🏆 CARTA 2 VENCEU! 🏆\n");
        printf("Vencedor: %s (menor densidade)\n", nome2);
        printf("Motivo: %.2f < %.2f hab/km²\n", densidade2, densidade1);
    }
    else {
        // Densidades iguais
        printf("🤝 EMPATE! 🤝\n");
        printf("Ambas têm a mesma densidade: %.2f hab/km²\n", densidade1);
    }
    
    printf("\n========================================\n");
    printf("           FIM DA COMPARAÇÃO\n");
    printf("   Obrigado por jogar Super Trunfo!\n");
    printf("========================================\n");
    
    return 0;
}