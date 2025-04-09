#include <stdio.h>

// Função recursiva para movimentar a Torre para a Direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha para a Esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo para Cima Direita
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Movimento do Cavalo com loops complexos: Cima, Cima, Direita
void moverCavalo() {
    const int movimentosVerticais = 2;
    const int movimentosHorizontais = 1;

    printf("\nMovimento do Cavalo (Cima, Cima, Direita):\n");

    // Loop para os dois movimentos para cima
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Cima\n");
    }

    // Loop while para o movimento para a direita
    int j = 0;
    while (j < movimentosHorizontais) {
        printf("Direita\n");
        j++;
    }
}


// Movimento do Bispo com loops aninhados (externo vertical, interno horizontal)
void moverBispoAninhado(int casas) {
    printf("\nMovimento do Bispo (usando loops aninhados):\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == i) {
                printf("Cima Direita\n");
            }
        }
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Movimento da Torre (Direita) usando recursividade
    printf("\nMovimento da Torre (usando recursividade):\n");
    moverTorre(casasTorre);

    // Movimento do Bispo (Diagonal Cima Direita) usando recursividade
    printf("\nMovimento do Bispo (usando recursividade):\n");
    moverBispo(casasBispo);

    // Movimento da Rainha (Esquerda) usando recursividade
    printf("\nMovimento da Rainha (usando recursividade):\n");
    moverRainha(casasRainha);

    // Movimento do Bispo com loops aninhados (desafio avançado extra)
    moverBispoAninhado(casasBispo);

    // Movimento do Cavalo com loops complexos
    moverCavalo();

    return 0;
}
