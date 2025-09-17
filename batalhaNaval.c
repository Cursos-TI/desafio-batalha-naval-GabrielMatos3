#include <stdio.h>

#define linhas 10
#define colunas 10
int main() {
    int i, j, NAVIO = 3, condicao;
    int tabuleiro[linhas][colunas]; // matriz do tabuleiro

    printf("==selecione uma opcao==\n");
    printf("1. Batalha Naval\n");
    printf("2. Formas Geometricas\n");
    printf("selecione uma opcao(1 ou 2): ");
    scanf("%d", &condicao);


    switch (condicao){
        case 1://iniciando batalha naval
            //Inicializar tabuleiro com 0 (água)
            for (i = 0; i < linhas; i++) {
                for (j = 0; j < colunas; j++) {
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

            //posicionar navio diagonal (3 casas diagonalmente)
            int linhaD = 0; //linha inicial
            int colunaD = 0; //coluna inicial
            for (i = 0; i < NAVIO; i++){
                for (j = 0; j < NAVIO; j++){
                    if (i == j){
                        tabuleiro[linhaD+i+2][colunaD+j+2] = 3;
                    }
                }
            }

            //Exibir tabuleiro
            printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

            for (i = 0; i < linhas; i++) {
                for (j = 0; j < colunas; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
            break;
        case 2: // formas geometricas
            for (i = 0; i < linhas; i++){
                for (j = 0; j < colunas; j++){
                    tabuleiro[i][j] = 0;
                    //piramide
                    if(i == 0 && j == 2){
                        tabuleiro[i][j] = 1;
                    }
                    if(i == 1 && (j == 1 || j == 2 || j == 3)){
                        tabuleiro[i][j] = 1;
                    }
                    if(i == 2 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4)){
                        tabuleiro[i][j] = 1;
                    }

                    //octaedro
                    if(i == 0 && j == 8){
                        tabuleiro[i][j] = 2;
                    }
                    if(i == 1 && (j == 7 || j == 8 || j == 9)){
                        tabuleiro[i][j] = 2;
                    }
                    if(i == 2 && j == 8){
                        tabuleiro[i][j] = 2;
                    }

                    //cruz
                    if((i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && j == 4){
                        tabuleiro[i][j] = 3;
                    }
                    if (i == 6 && (j == 2 || j == 3 || j == 4 || j == 5 || j == 6)){
                        tabuleiro[i][j] = 3;
                    }

                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
            
            break;
        }
    return 0;
}
