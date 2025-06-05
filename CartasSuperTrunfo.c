#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // === DECLARAÇÃO DAS VARIÁVEIS DAS CARTAS ===
    // Carta 1
    char estado1[10], codigo1[10], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;
    
    // Carta 2
    char estado2[10], codigo2[10], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;
    
    // Variáveis para o sistema de comparação
    int opcao_menu1, opcao_menu2;
    float valor1_atributo1, valor1_atributo2;
    float valor2_atributo1, valor2_atributo2;
    float soma_carta1, soma_carta2;
    char nome_atributo1[30], nome_atributo2[30];
    int carta1_vence_attr1, carta1_vence_attr2;
    int menu_valido1 = 0, menu_valido2 = 0;
    
    // === APRESENTAÇÃO DO PROGRAMA ===
    printf("╔══════════════════════════════════════════════════════════╗\n");
    printf("║               SUPER TRUNFO - NÍVEL MESTRE               ║\n");
    printf("║          Comparações Avançadas com Múltiplos            ║\n");
    printf("║                    Atributos                             ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n\n");
    
    // === CADASTRO DAS CARTAS ===
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos automáticos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
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
    
    // Cálculos automáticos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    
    // === EXIBIÇÃO DAS CARTAS CADASTRADAS ===
    printf("\n╔══════════════════════════════════════════════════════════╗\n");
    printf("║                    CARTAS CADASTRADAS                   ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    
    printf("\n🃏 CARTA 1: %s (%s)\n", nome1, estado1);
    printf("   População: %d habitantes\n", populacao1);
    printf("   Área: %.2f km²\n", area1);
    printf("   PIB: %.2f bilhões\n", pib1);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("   Densidade: %.2f hab/km²\n", densidade1);
    printf("   PIB per Capita: %.6f bilhões/hab\n", pib_per_capita1);
    
    printf("\n🃏 CARTA 2: %s (%s)\n", nome2, estado2);
    printf("   População: %d habitantes\n", populacao2);
    printf("   Área: %.2f km²\n", area2);
    printf("   PIB: %.2f bilhões\n", pib2);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("   Densidade: %.2f hab/km²\n", densidade2);
    printf("   PIB per Capita: %.6f bilhões/hab\n", pib_per_capita2);
    
    // === MENU DINÂMICO PARA ESCOLHA DO PRIMEIRO ATRIBUTO ===
    printf("\n╔══════════════════════════════════════════════════════════╗\n");
    printf("║                ESCOLHA DOS ATRIBUTOS                    ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    
    do {
        printf("\n🎯 ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAÇÃO:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("Digite sua opção (1-6): ");
        scanf("%d", &opcao_menu1);
        
        switch(opcao_menu1) {
            case 1:
                valor1_atributo1 = populacao1;
                valor2_atributo1 = populacao2;
                strcpy(nome_atributo1, "População");
                menu_valido1 = 1;
                break;
            case 2:
                valor1_atributo1 = area1;
                valor2_atributo1 = area2;
                strcpy(nome_atributo1, "Área");
                menu_valido1 = 1;
                break;
            case 3:
                valor1_atributo1 = pib1;
                valor2_atributo1 = pib2;
                strcpy(nome_atributo1, "PIB");
                menu_valido1 = 1;
                break;
            case 4:
                valor1_atributo1 = pontos_turisticos1;
                valor2_atributo1 = pontos_turisticos2;
                strcpy(nome_atributo1, "Pontos Turísticos");
                menu_valido1 = 1;
                break;
            case 5:
                valor1_atributo1 = densidade1;
                valor2_atributo1 = densidade2;
                strcpy(nome_atributo1, "Densidade Populacional");
                menu_valido1 = 1;
                break;
            case 6:
                valor1_atributo1 = pib_per_capita1;
                valor2_atributo1 = pib_per_capita2;
                strcpy(nome_atributo1, "PIB per Capita");
                menu_valido1 = 1;
                break;
            default:
                printf("❌ Opção inválida! Tente novamente.\n");
                menu_valido1 = 0;
        }
    } while (!menu_valido1);
    
    printf("✅ Primeiro atributo selecionado: %s\n", nome_atributo1);
    
    // === MENU DINÂMICO PARA ESCOLHA DO SEGUNDO ATRIBUTO ===
    do {
        printf("\n🎯 ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAÇÃO:\n");
        
        // Menu dinâmico - exclui a opção já escolhida
        if (opcao_menu1 != 1) printf("1 - População\n");
        if (opcao_menu1 != 2) printf("2 - Área\n");
        if (opcao_menu1 != 3) printf("3 - PIB\n");
        if (opcao_menu1 != 4) printf("4 - Pontos Turísticos\n");
        if (opcao_menu1 != 5) printf("5 - Densidade Populacional\n");
        if (opcao_menu1 != 6) printf("6 - PIB per Capita\n");
        
        printf("Digite sua opção: ");
        scanf("%d", &opcao_menu2);
        
        // Verifica se não é o mesmo atributo
        if (opcao_menu2 == opcao_menu1) {
            printf("❌ Você já escolheu este atributo! Selecione outro.\n");
            menu_valido2 = 0;
            continue;
        }
        
        switch(opcao_menu2) {
            case 1:
                valor1_atributo2 = populacao1;
                valor2_atributo2 = populacao2;
                strcpy(nome_atributo2, "População");
                menu_valido2 = 1;
                break;
            case 2:
                valor1_atributo2 = area1;
                valor2_atributo2 = area2;
                strcpy(nome_atributo2, "Área");
                menu_valido2 = 1;
                break;
            case 3:
                valor1_atributo2 = pib1;
                valor2_atributo2 = pib2;
                strcpy(nome_atributo2, "PIB");
                menu_valido2 = 1;
                break;
            case 4:
                valor1_atributo2 = pontos_turisticos1;
                valor2_atributo2 = pontos_turisticos2;
                strcpy(nome_atributo2, "Pontos Turísticos");
                menu_valido2 = 1;
                break;
            case 5:
                valor1_atributo2 = densidade1;
                valor2_atributo2 = densidade2;
                strcpy(nome_atributo2, "Densidade Populacional");
                menu_valido2 = 1;
                break;
            case 6:
                valor1_atributo2 = pib_per_capita1;
                valor2_atributo2 = pib_per_capita2;
                strcpy(nome_atributo2, "PIB per Capita");
                menu_valido2 = 1;
                break;
            default:
                printf("❌ Opção inválida! Tente novamente.\n");
                menu_valido2 = 0;
        }
    } while (!menu_valido2);
    
    printf("✅ Segundo atributo selecionado: %s\n", nome_atributo2);
    
    // === COMPARAÇÃO DOS ATRIBUTOS ===
    printf("\n╔══════════════════════════════════════════════════════════╗\n");
    printf("║                      BATALHA!                           ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    
    // Comparação do primeiro atributo
    printf("\n⚔️  PRIMEIRA BATALHA - %s:\n", nome_atributo1);
    printf("🃏 %s: %.2f\n", nome1, valor1_atributo1);
    printf("🃏 %s: %.2f\n", nome2, valor2_atributo1);
    
    // Regra especial para densidade (menor vence)
    if (strcmp(nome_atributo1, "Densidade Populacional") == 0) {
        carta1_vence_attr1 = (valor1_atributo1 < valor2_atributo1) ? 1 : 0;
        printf("Resultado: %s venceu! (menor densidade)\n", 
               carta1_vence_attr1 ? nome1 : nome2);
    } else {
        carta1_vence_attr1 = (valor1_atributo1 > valor2_atributo1) ? 1 : 0;
        printf("Resultado: %s venceu! (maior valor)\n", 
               carta1_vence_attr1 ? nome1 : nome2);
    }
    
    // Comparação do segundo atributo
    printf("\n⚔️  SEGUNDA BATALHA - %s:\n", nome_atributo2);
    printf("🃏 %s: %.2f\n", nome1, valor1_atributo2);
    printf("🃏 %s: %.2f\n", nome2, valor2_atributo2);
    
    // Regra especial para densidade (menor vence)
    if (strcmp(nome_atributo2, "Densidade Populacional") == 0) {
        carta1_vence_attr2 = (valor1_atributo2 < valor2_atributo2) ? 1 : 0;
        printf("Resultado: %s venceu! (menor densidade)\n", 
               carta1_vence_attr2 ? nome1 : nome2);
    } else {
        carta1_vence_attr2 = (valor1_atributo2 > valor2_atributo2) ? 1 : 0;
        printf("Resultado: %s venceu! (maior valor)\n", 
               carta1_vence_attr2 ? nome1 : nome2);
    }
    
    // === CÁLCULO DA SOMA DOS ATRIBUTOS ===
    soma_carta1 = valor1_atributo1 + valor1_atributo2;
    soma_carta2 = valor2_atributo1 + valor2_atributo2;
    
    printf("\n╔══════════════════════════════════════════════════════════╗\n");
    printf("║                  RESULTADO FINAL                        ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    
    printf("\n📊 SOMA DOS ATRIBUTOS:\n");
    printf("🃏 %s: %.2f + %.2f = %.2f\n", nome1, valor1_atributo1, valor1_atributo2, soma_carta1);
    printf("🃏 %s: %.2f + %.2f = %.2f\n", nome2, valor2_atributo1, valor2_atributo2, soma_carta2);
    
    // === DETERMINAÇÃO DO VENCEDOR FINAL ===
    printf("\n🏆 VENCEDOR DA RODADA:\n");
    
    if (soma_carta1 > soma_carta2) {
        printf("🥇 CARTA 1 VENCEU! 🥇\n");
        printf("Vencedor: %s (%s)\n", nome1, estado1);
        printf("Soma vencedora: %.2f > %.2f\n", soma_carta1, soma_carta2);
    }
    else if (soma_carta2 > soma_carta1) {
        printf("🥇 CARTA 2 VENCEU! 🥇\n");
        printf("Vencedor: %s (%s)\n", nome2, estado2);
        printf("Soma vencedora: %.2f > %.2f\n", soma_carta2, soma_carta1);
    }
    else {
        printf("🤝 EMPATE! 🤝\n");
        printf("Ambas as cartas têm a mesma soma: %.2f\n", soma_carta1);
    }
    
    // === RESUMO DETALHADO ===
    printf("\n╔══════════════════════════════════════════════════════════╗\n");
    printf("║                   RESUMO DA BATALHA                     ║\n");
    printf("╚══════════════════════════════════════════════════════════╝\n");
    
    printf("\n📋 Países: %s x %s\n", nome1, nome2);
    printf("📋 Atributos comparados: %s e %s\n", nome_atributo1, nome_atributo2);
    printf("📋 Batalhas individuais:\n");
    printf("   • %s: %s\n", nome_atributo1, carta1_vence_attr1 ? nome1 : nome2);
    printf("   • %s: %s\n", nome_atributo2, carta1_vence_attr2 ? nome1 : nome2);
    printf("📋 Resultado final: %s\n", 
           (soma_carta1 > soma_carta2) ? nome1 : 
           (soma_carta2 > soma_carta1) ? nome2 : "Empate");
    
    printf("\n🎮 Obrigado por jogar Super Trunfo - Nível Mestre! 🎮\n");
    
    return 0;
}