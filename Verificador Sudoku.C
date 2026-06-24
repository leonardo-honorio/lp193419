/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Data        : 24/06/2026
Objetivo    : Criar um código que leia um determinado arquivo e verifique se aquela(s) matrizes são soluções válidas para um jogo de sudoku
-------------------------------------------------------------------------- */

// O arquivo "input1.txt" informado abaixo refere-se ao arquivo de entrada oficial que foi utilizado, disponível em: "https://www.ime.usp.br/~cef/Xmaratona/problems/io/sudoku.in"


#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // Abre o arquivo "input1.txt"
    FILE *arquivo = fopen("input1.txt", "r");

    // Verifica se o arquivo foi aberto com sucesso antes de continuar
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo input1.txt.\n");
        return 1;
    }

    int n;
    
    fscanf(arquivo, "%d", &n);

    for (int instancia = 1; instancia <= n; instancia++) {

        int sudoku[9][9];
        int valido = 1;

        // Leitura da matriz a partir do arquivo
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                fscanf(arquivo, "%d", &sudoku[i][j]);
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

    fclose(arquivo);

    return 0;
}
