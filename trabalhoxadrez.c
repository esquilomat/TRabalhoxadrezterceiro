#include <stdio.h>


int main (){

    int t = 0,b = 0,r = 0;

    printf("A movimentacao da peca TORRE \n");
    
    do { 

        printf(" DIREITA\n");

        t++;

        
    } while (t <5);

    printf("A movimentacao da peca BISPO e:\n");

    while(b < 5) {

        printf("CIMA,DIREITA\n");

        b++;


    }

    printf("A movimentacao da peca RAINHA e:\n");

    for (r = 0; r < 8; r++) {

        printf("ESQUERDA\n");
    }


}