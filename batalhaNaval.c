#include <stdio.h>

 int main(){

    //declaração de variaveis
    char linha[10];
    int coluna[10];
    int tabuleiro[10][10] = {0};
    int navio1[3], navio2[3]; 

    //definindo valores dos navios
    for (int i = 0; i < 3; i++){
        navio1[i] = 3;
        navio2[i] = 3;
    }

    //definindo caracteres da coluna
    for(int i = 0; i < 10; i++){
        coluna[i] = i + 1;
    }

    //definindo caracteres da linha
    for (int i = 0; i < 10; i++){
        linha[i] = 'A' + i;
    }

    printf("TABULEIRO BATALHA NAVAL \n");
    printf("   ");
    
    //imprimindo as linhas e o tabuleiro
    for (int i = 0; i < 10; i++){
        printf("%c ", linha[i]); //imprime os numeros da linha de 1 a 10
    }
    printf("\n");

    for (int i =0; i < 10; i++){
        printf("%2d", i + 1); //imprime o númeor da linha
        for (int j = 0; j < 10; j++){
            tabuleiro[7][6] = navio1[0];
            tabuleiro[7][7] = navio1[1];
            tabuleiro[7][8] = navio1[2];
            tabuleiro[2][5] = navio2[0];
            tabuleiro[3][5] = navio2[1];
            tabuleiro[4][5] = navio2[2];
            printf("%2d", tabuleiro[i][j]); // imprime o valor da célula no tabuleiro
        }
        printf("\n");
    }

    return 0;
 }