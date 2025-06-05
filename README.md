# 🎮 Super Trunfo - Países (Nível Mestre)

Um jogo interativo de comparação de cartas desenvolvido em C, onde o jogador pode escolher dois atributos diferentes para batalhar entre duas cidades/países.

## 📋 Índice

- [Sobre o Projeto](#sobre-o-projeto)
- [Funcionalidades](#funcionalidades)
- [Pré-requisitos](#pré-requisitos)
- [Como Compilar](#como-compilar)
- [Como Executar](#como-executar)
- [Como Jogar](#como-jogar)
- [Atributos Disponíveis](#atributos-disponíveis)
- [Exemplos de Uso](#exemplos-de-uso)
- [Estrutura do Código](#estrutura-do-código)
- [Contribuição](#contribuição)

## 🎯 Sobre o Projeto

Este projeto implementa a versão **Nível Mestre** do jogo Super Trunfo com tema de países e cidades. O programa permite ao usuário cadastrar duas cartas com informações de cidades e realizar comparações avançadas usando múltiplos atributos.

### Características Principais:
- ✅ Cadastro interativo de duas cartas
- ✅ Cálculos automáticos de densidade populacional e PIB per capita
- ✅ Sistema de menu dinâmico para seleção de atributos
- ✅ Comparação com dois atributos diferentes
- ✅ Sistema de pontuação baseado na soma dos atributos
- ✅ Tratamento especial para densidade populacional (menor valor vence)
- ✅ Interface visual organizada com emojis e bordas

## 🚀 Funcionalidades

### 1. Cadastro de Cartas
- Entrada de dados para duas cidades/países
- Campos: Estado, Código, Nome, População, Área, PIB, Pontos Turísticos
- Cálculos automáticos de densidade e PIB per capita

### 2. Sistema de Batalha
- Escolha de dois atributos diferentes para comparação
- Menu dinâmico que remove opções já selecionadas
- Comparações individuais por atributo
- Resultado final baseado na soma dos valores

### 3. Regras Especiais
- **Densidade Populacional**: Menor valor vence (menos congestionamento)
- **Outros Atributos**: Maior valor vence
- **Resultado Final**: Soma dos dois atributos escolhidos

## 🛠️ Pré-requisitos

Para compilar e executar este programa, você precisa de:

- **Compilador C**: GCC, Clang, ou similar
- **Sistema Operacional**: Windows, Linux, macOS
- **Terminal/Prompt de Comando**

### Instalação do GCC:

**Windows:**
```bash
# Instalar MinGW ou usar WSL
# Ou baixar GCC através do Dev-C++, Code::Blocks
```

**Linux (Ubuntu/Debian):**
```bash
sudo apt update
sudo apt install gcc
```

**macOS:**
```bash
# Instalar Xcode Command Line Tools
xcode-select --install
```

## ⚙️ Como Compilar

### Opção 1: Compilação Simples
```bash
gcc super_trunfo.c -o super_trunfo
```

### Opção 2: Compilação com Flags de Debug
```bash
gcc -Wall -Wextra -g super_trunfo.c -o super_trunfo
```

### Opção 3: Compilação Otimizada
```bash
gcc -O2 super_trunfo.c -o super_trunfo
```

## ▶️ Como Executar

### Windows:
```bash
super_trunfo.exe
```

### Linux/macOS:
```bash
./super_trunfo
```

## 🎲 Como Jogar

### 1. Iniciar o Programa
Execute o arquivo compilado e você verá a tela de boas-vindas.

### 2. Cadastrar a Primeira Carta
```
--- CADASTRO DA CARTA 1 ---
Estado: SP
Código: A01
Nome da cidade: São Paulo
População: 12325000
Área (km²): 1521.11
PIB (bilhões): 699.28
Pontos turísticos: 50
```

### 3. Cadastrar a Segunda Carta
```
--- CADASTRO DA CARTA 2 ---
Estado: RJ
Código: B02
Nome da cidade: Rio de Janeiro
População: 6748000
Área (km²): 1200.25
PIB (bilhões): 300.50
Pontos turísticos: 30
```

### 4. Escolher o Primeiro Atributo
```
🎯 ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAÇÃO:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
6 - PIB per Capita
Digite sua opção (1-6): 1
```

### 5. Escolher o Segundo Atributo
O menu automaticamente remove a opção já escolhida:
```
🎯 ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAÇÃO:
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional
6 - PIB per Capita
Digite sua opção: 3
```

### 6. Ver o Resultado da Batalha
O programa mostra as comparações individuais e o resultado final.

## 📊 Atributos Disponíveis

| Atributo | Tipo | Descrição | Regra de Vitória |
|----------|------|-----------|------------------|
| **População** | Inteiro | Número de habitantes | Maior vence |
| **Área** | Float | Tamanho em km² | Maior vence |
| **PIB** | Float | Produto Interno Bruto em bilhões | Maior vence |
| **Pontos Turísticos** | Inteiro | Quantidade de atrações | Maior vence |
| **Densidade Populacional** | Float (calculado) | População ÷ Área | **Menor vence** |
| **PIB per Capita** | Float (calculado) | PIB ÷ População | Maior vence |

### Cálculos Automáticos:
- **Densidade Populacional** = População ÷ Área
- **PIB per Capita** = PIB ÷ População

## 💡 Exemplos de Uso

### Exemplo 1: Batalha São Paulo vs Rio de Janeiro

#### Entrada:
```
Carta 1: São Paulo (SP)
- População: 12325000
- Área: 1521.11 km²
- PIB: 699.28 bilhões
- Pontos Turísticos: 50

Carta 2: Rio de Janeiro (RJ)
- População: 6748000
- Área: 1200.25 km²
- PIB: 300.50 bilhões
- Pontos Turísticos: 30

Atributos escolhidos: População + PIB
```

#### Resultado:
```
⚔️ PRIMEIRA BATALHA - População:
🃏 São Paulo: 12325000.00
🃏 Rio de Janeiro: 6748000.00
Resultado: São Paulo venceu! (maior valor)

⚔️ SEGUNDA BATALHA - PIB:
🃏 São Paulo: 699.28
🃏 Rio de Janeiro: 300.50
Resultado: São Paulo venceu! (maior valor)

📊 SOMA DOS ATRIBUTOS:
🃏 São Paulo: 12325000.00 + 699.28 = 12325699.28
🃏 Rio de Janeiro: 6748000.00 + 300.50 = 6748300.50

🥇 CARTA 1 VENCEU! 🥇
Vencedor: São Paulo (SP)
```

### Exemplo 2: Batalha com Densidade Populacional

#### Atributos: Densidade + Pontos Turísticos
```
⚔️ PRIMEIRA BATALHA - Densidade Populacional:
🃏 São Paulo: 8102.47
🃏 Rio de Janeiro: 5622.24
Resultado: Rio de Janeiro venceu! (menor densidade)

⚔️ SEGUNDA BATALHA - Pontos Turísticos:
🃏 São Paulo: 50.00
🃏 Rio de Janeiro: 30.00
Resultado: São Paulo venceu! (maior valor)
```

## 🏗️ Estrutura do Código

### Principais Seções:

1. **Declaração de Variáveis**
   - Variáveis para as duas cartas
   - Variáveis do sistema de comparação
   - Flags de validação

2. **Cadastro das Cartas**
   - Entrada de dados via scanf
   - Cálculos automáticos
   - Validação de entrada

3. **Sistema de Menus**
   - Menu dinâmico com switch-case
   - Validação de opções
   - Prevenção de escolhas duplicadas

4. **Sistema de Batalha**
   - Comparações individuais
   - Aplicação de regras especiais
   - Cálculo de resultado final

5. **Exibição de Resultados**
   - Formatação visual organizada
   - Resumo detalhado da batalha
   - Estatísticas finais

### Funções Principais:

- `scanf()`: Entrada de dados do usuário
- `printf()`: Exibição formatada de resultados
- `switch-case`: Sistema de menus
- `strcmp()`: Comparação de strings
- `strcpy()`: Cópia de strings
- Operador ternário `? :`: Comparações condicionais


## 👨‍💻 Autor

**Antonio Jose** - Desenvolvimento do Super Trunfo

---

### 🎯 Dicas de Uso:

- **Dados Realistas**: Use dados reais de cidades para uma experiência mais interessante
- **Estratégia**: Considere que densidade populacional tem regra inversa
- **Variedade**: Experimente diferentes combinações de atributos
- **Análise**: Observe como diferentes atributos afetam o resultado final

**Divirta-se jogando Super Trunfo! 🎮**