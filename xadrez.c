#include <stdio.h>


// ============================================================
// FUNÇÃO RECURSIVA DA TORRE
// A Torre se move 5 casas para a direita.
// A cada chamada da função, uma casa é percorrida.
// ============================================================

void moverTorre(int casas) {

    // Condição de parada da recursividade
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    // Chama a própria função novamente,
    // diminuindo uma casa.
    moverTorre(casas - 1);
}


// ============================================================
// FUNÇÃO RECURSIVA DO BISPO
// O Bispo se move 5 casas na diagonal:
// Cima + Direita.
//
// Além da recursividade, utilizamos loops aninhados.
// O loop externo representa o movimento vertical (Cima).
// O loop interno representa o movimento horizontal (Direita).
// ============================================================

void moverBispo(int casas) {

    // Condição de parada da recursividade
    if (casas == 0) {
        return;
    }

    // Loop externo: movimento vertical
    for (int vertical = 0; vertical < 1; vertical++) {

        printf("Cima\n");

        // Loop interno: movimento horizontal
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    // Chama a função novamente para a próxima casa.
    moverBispo(casas - 1);
}


// ============================================================
// FUNÇÃO RECURSIVA DA RAINHA
// A Rainha se move 8 casas para a esquerda.
// ============================================================

void moverRainha(int casas) {

    // Condição de parada
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    // Próxima chamada recursiva
    moverRainha(casas - 1);
}

int main() {

    //========================================================================
    //casas que cada peca anda
    //========================================================================

    int casastorre = 5;
    int casasbispo = 5;
    int casasrainha = 8;

    //=======================================================================
    //movimento da torre usando recursividade
    //=======================================================================

    printf("movimento da torre\n");  

    moverTorre(casastorre);

    //============================================================================
    //movimento do bisbo usando recursividade + loops aninhados
    //===========================================================================

    printf("\nmovimento do bisbo:\n");
    moverBispo(casasbispo);

    //==============================================================================
    //movimento da rainha usando recursividade
    //==============================================================================

    printf("\nmovimento da rainha\n");
    moverRainha(casasrainha);

    //======================================================================================================================
    //movimento do cavalo 
    //o cavalo agora se move 2 casas para cima e 1 casa para a  direita usando dois loops aninhados o for e o while
    //======================================================================================================================

    printf("\n movimento do cavalo:\n");

    int  casascima   = 2;
    int casasdireita = 1;

    //loop externo
   for (int i = 0; i < casascima; i++){
    int j = 0;
    while (j < 1){
        printf("cima\n");
        j++;
    }
   }

    for ( int i = 0; i < casasdireita; i++){
        printf("direita\n");
    }

      return 0;
}
