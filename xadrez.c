#include <stdio.h>

int main() {
    // Movimentação da Torre (5 casas para a direita) usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (5 casas na diagonal superior direita) usando WHILE
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimentação da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimentação do Cavalo (2 casas para baixo e 1 para a esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int m = 0; m < 2; m++) { // Duas casas para baixo
        printf("Baixo\n");
    }
    
    int n = 0;
    while (n < 1) { // Uma casa para a esquerda
        printf("Esquerda\n");
        n++;
    }

    return 0;
}