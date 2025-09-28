#include <stdio.h>
#include <stdlib.h>

/*
    Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, 
    utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. O programa deverá 
    imprimir no console a direção do movimento a cada casa percorrida pela peça.
    
    -Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco 
    casas para a direita.
    -Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à 
    direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
    -Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    -Cavalo: Move-se em "L", ou seja, duas casas em uma direção e depois uma casa perpendicular. Seu programa deverá simular
    o movimento do Cavalo, movendo-se duas casas para cima e depois uma casa para a direita.

    Requisitos funcionais e não fuincionais descritos no site da disiplina.
*/

/*
    FUNÇÕES BÁSICAS
*/ 

// Função mover_torre(int casas) - Simula o movimento da Torre para a direita.
void mover_torre(int casas) {
    if (casas <= 0) {
        printf("\n");
        return;
    }
    printf("Direita\n");
    mover_torre(casas - 1);
}   

// Função mover_bispo(int casas) - Simula o movimento do Bispo na diagonal para cima e à direita.
void mover_bispo(int casas) {
    if (casas <= 0) {
        printf("\n");
        return;
    }
    // Loop externo: movimento vertical (cima)
    for (int v = 0; v < 1; v++) {
        printf("Cima, ");
        // Loop interno: movimento horizontal (direita)
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
    mover_bispo(casas - 1);
}

// Função mover_rainha(int casas) - Simula o movimento da Rainha para a esquerda.
void mover_rainha(int casas) {
    if (casas <= 0) {
        printf("\n");
        return;
    }
    printf("Esquerda\n");
    mover_rainha(casas - 1);    
}

// Função mover_cavalo(int casas) - Simula o movimento do Cavalo em "L".
void mover_cavalo(int casas) {
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    printf("Direita\n\n");    
}

int main(int argc, char const *argv[])
{
    mover_torre(5);
    mover_bispo(5);
    mover_rainha(8);
    mover_cavalo(1);
    return 0;
}
