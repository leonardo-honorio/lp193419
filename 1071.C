/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 21/04/2026
Objetivo    : Ler dois valores inteiros e calcular a soma dos números ímpares entre eles
Aprendizado : Utilizar a função "for" para calcular a soma dos números ímpares entre dois inteiros
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int X, Y;
    int i, soma = 0;
    int menor, maior;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X < Y) {
        menor = X;
        maior = Y;
    } else {
        menor = Y;
        maior = X;
    }

    for (i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) { 
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
