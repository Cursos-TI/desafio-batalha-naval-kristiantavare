#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

#include <stdio.h>

int main() {
    // Declaração da matriz do tabuleiro 10x10, inicializado com 0 (água)
    int tabuleiro[10][10] = {0};

    // Tamanho dos navios (fixo 3)
    int tamanhoNavio = 3;

    // Coordenadas do navio horizontal (linha fixa, coluna variável)
    int linhaHorizontal = 2;   // Linha onde será posicionado
    int colunaHorizontal = 4;  // Coluna inicial

    // Coordenadas do navio vertical (coluna fixa, linha variável)
    int linhaVertical = 5;     // Linha inicial
    int colunaVertical = 7;    // Coluna onde será posicionado

    // Verifica se o navio horizontal cabe no tabuleiro
    if (colunaHorizontal + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites!\n");
    }

    // Verifica se o navio vertical cabe no tabuleiro
    if (linhaVertical + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            // Verifica se não está sobrepondo outro navio
            if (tabuleiro[linhaVertical + i][colunaVertical] == 0) {
                tabuleiro[linhaVertical + i][colunaVertical] = 3;
            } else {
                printf("Erro: Navios se sobrepõem na posicao (%d, %d)!\n", linhaVertical + i, colunaVertical);
            }
        }
    } else {
        printf("Erro: Navio vertical fora dos limites!\n");
    }

    // Impressão do tabuleiro
    printf("\n===== Tabuleiro de Batalha Naval =====\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

 
    return 0;
}
