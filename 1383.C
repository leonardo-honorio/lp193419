/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 18/06/2026
Objetivo    : Verificar se uma matriz 9x9 atende todas as regras do sudoku
Aprendizado : Praticar matrizes bidimensionais, vetores de controle, laços aninhados, validação de dados...
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {

        int sudoku[9][9];
        int valido = 1;

        // Leitura da matriz
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }

        // Verificar linhas
        for (int i = 0; i < 9 && valido; i++) {

            int apareceu[10] = {0};

            for (int j = 0; j < 9; j++) {

                int num = sudoku[i][j];

                if (num < 1 || num > 9 || apareceu[num]) {
                    valido = 0;
                    break;
                }

                apareceu[num] = 1;
            }
        }

        // Verificar colunas
        for (int j = 0; j < 9 && valido; j++) {

            int apareceu[10] = {0};

            for (int i = 0; i < 9; i++) {

                int num = sudoku[i][j];

                if (num < 1 || num > 9 || apareceu[num]) {
                    valido = 0;
                    break;
                }

                apareceu[num] = 1;
            }
        }

        // Verificar blocos 3x3
        for (int linha = 0; linha < 9 && valido; linha += 3) {

            for (int coluna = 0; coluna < 9 && valido; coluna += 3) {

                int apareceu[10] = {0};

                for (int i = linha; i < linha + 3; i++) {

                    for (int j = coluna; j < coluna + 3; j++) {

                        int num = sudoku[i][j];

                        if (num < 1 || num > 9 || apareceu[num]) {
                            valido = 0;
                            break;
                        }

                        apareceu[num] = 1;
                    }

                    if (!valido) {
                        break;
                    }
                }
            }
        }

        printf("Instancia %d\n", instancia);

        if (valido) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }

        printf("\n");
    }

    return 0;
}
