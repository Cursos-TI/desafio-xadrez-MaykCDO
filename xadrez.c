#include <stdio.h>

int main(){
    // Movimento da torre: 5 casas para a direita (usando for)
    int i;
    printf("\nMovimento da Torre: \n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo: 5 casas na diagonal para cima e a direita (usando while )
    int j = 0;
    printf("\nMovimento do Bispo: \n");
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da rainha: 8 casas para a esquerda ( usando do-while)
    int k = 0;
    printf("\nMovimento da Rainha: \n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}