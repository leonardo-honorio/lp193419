/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Ler uma quantia de números inteiros e apresentar o maior entre eles, junto com a posição
Aprendizado : Apresentar o maior valor lido e a sua posição
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int i, valor, maior, posicao;

    scanf("%d", &valor);
    maior = valor;
    posicao = 1;

    for (i = 2; i <= 100; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
