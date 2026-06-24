/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 23/06/2026
Objetivo    : Praticar matrizes bidimensionais, percorrendo células e contando elementos adjacentes em quatro direções
Aprendizado : Manipular matrizes, verificar limites de índices e resolver problemas de contagem de vizinhos
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF) {

        int mat[100][100];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {

                if (mat[i][j] == 1) {
                    printf("9");
                }
                else {
                    int qtd = 0;

                    if (i > 0 && mat[i - 1][j] == 1)
                        qtd++;

                    if (i < N - 1 && mat[i + 1][j] == 1)
                        qtd++;

                    if (j > 0 && mat[i][j - 1] == 1)
                        qtd++;

                    if (j < M - 1 && mat[i][j + 1] == 1)
                        qtd++;

                    printf("%d", qtd);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
