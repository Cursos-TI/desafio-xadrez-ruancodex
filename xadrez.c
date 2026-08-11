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


    //movimento do cavalo em l 2 casas para baixo e 1 pra esquerda usando um loop aninhado usando while em dentro de um for 

    printf("\n movimento do cavalo:\n");

    int  casasbaixo   = 2;
    int casasesquerda = 1;

    //loop externo
    for(int j = 0; j< casasbaixo; j++){
        int k = 0 ;
        while(k < 1){
            printf("baixo\n");
            k++;
        }
    }

    printf("esquerda\n");


      return 0;
}
