#include <stdio.h>

int main() {
    int i, j, TAM = 10, NAVIO = 3;
    int tabuleiro[TAM][TAM]; // matriz do tabuleiro

    //Inicializar tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Definir coordenadas iniciais dos navios
    // Navio 1 - horizontal
    int linhaH = 2;   // linha inicial
    int colunaH = 4;  // coluna inicial

    // Navio 2 - vertical
    int linhaV = 5;   // linha inicial
    int colunaV = 7;  // coluna inicial

    //Posicionar navio horizontal (3 casas para direita)
    for (i = 0; i < NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    //Posicionar navio vertical (3 casas para baixo)
    for (i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    //Exibir tabuleiro
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
