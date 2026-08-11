#include <stdio.h>



int main() {

    //casas que cada peca anda
    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;

    //movimento da torre usando for. ela se move 5 casas para a direita.

    printf("movimento da torre\n");  

    for (int i = 0; i < casastorre; i++){
        printf("direita\n");
    }

    //movimento do bisbo usando while. ela se move 5 vezes pra cima e pra direita.

    printf("\nmovimento do bisbo:\n");
    int i =0;

    while (i < casasbispo){
        printf("cima pra direita\n");
        i++;
    }

    //movimento da rainha usando do while ela se move 8 vezes para a esquerda.

    printf("\nmovimento da rainha\n");
    i = 0;

    do {
        printf("esquerda\n");
        i++;
    }while (i < casasrainha);


      return 0;
}
