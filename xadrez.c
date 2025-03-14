#include <stdio.h>

// Função recursiva para o movimento da Torre (apenas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (apenas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo (diagonal superior direita)
void moverBispo(int casas, int passos) {
    if (passos == casas) return;
    printf("Cima, Direita\n");
    moverBispo(casas, passos + 1);
}

// Movimentação do Bispo com loops aninhados
void moverBispoLoops(int casas) {
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int i = 0; i < casas; i++) { // Movimento vertical
        for (int j = 0; j < 1; j++) { // Movimento horizontal por iteração
            printf("Cima, Direita\n");
        }
    }
}

// Movimentação do Cavalo usando loops aninhados e controle de fluxo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Uma casa para a direita
        printf("Direita\n");
    }
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;
    
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(casasBispo, 0);
    
    moverBispoLoops(casasBispo);
    
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);
    
    moverCavalo();
    
    return 0;
}