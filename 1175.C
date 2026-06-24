/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 23/06/2026
Objetivo    : Praticar manipulação de vetores, realizando a troca de elementos simétricos
Aprendizado : Aprender a inverter um vetor utilizando índices e uma variável auxiliar para realizar trocas de valores
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N[20];
    int i, aux;

    // Leitura do vetor
    for(i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    // Troca dos elementos
    for(i = 0; i < 10; i++) {
        aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    // Impressão do vetor
    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
