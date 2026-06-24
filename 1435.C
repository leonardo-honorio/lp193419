/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 23/06/2026
Objetivo    : Construir uma matriz quadrada
Aprendizado : Praticar matrizes bidimensionais, laços aninhados
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) && N != 0) {

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {

                int valor = i;

                if (j < valor)
                    valor = j;

                if (N - 1 - i < valor)
                    valor = N - 1 - i;

                if (N - 1 - j < valor)
                    valor = N - 1 - j;

                valor++;

                if (j == 0)
                    printf("%3d", valor);
                else
                    printf(" %3d", valor);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
