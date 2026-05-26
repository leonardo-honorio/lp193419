/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 26/05/2026
Objetivo    : Desenhar uma matriz na tela destacando suas diagonais usando a sintaxe tradicional de colchetes
Aprendizado : Utilização de laços for e condições if/else encadeados para controlar linhas e colunas de uma matriz comum
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        int matriz[70][70];

        // Preenchimento da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i + j == N - 1) {
                    matriz[i][j] = 2; // Diagonal secundária
                } else if (i == j) {
                    matriz[i][j] = 1; // Diagonal principal
                } else {
                    matriz[i][j] = 3; // Demais elementos
                }
            }
        }

        // Impressão da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
