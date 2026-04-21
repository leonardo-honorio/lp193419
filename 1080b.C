/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Ler uma quantia de números inteiros e apresentar o maior entre eles, junto com a posição, utilizando um vetor
Aprendizado : Apresentar o maior valor lido e a sua posição
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int v[100];
    int i, maior, posicao;

    for (i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 1;

    for (i = 1; i < 100; i++) {
        if (v[i] > maior) {
            maior = v[i];
            posicao = i + 1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
