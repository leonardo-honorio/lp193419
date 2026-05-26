/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 26/05/2026
Objetivo    : Desenhar uma matriz na tela, mas acessando os elementos diretamente na memória do computador
Aprendizado : Como substituir os colchetes por aritmética de ponteiros, calculando manualmente a posição exata de cada linha e coluna na memória
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        int matriz[4900]; // 70 * 70 elementos no máximo

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i + j == N - 1) {
                    *(matriz + (i * N) + j) = 2;
                } else if (i == j) {
                    *(matriz + (i * N) + j) = 1;
                } else {
                    *(matriz + (i * N) + j) = 3;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", *(matriz + (i * N) + j));
            }
            printf("\n");
        }
    }

    return 0;
}
