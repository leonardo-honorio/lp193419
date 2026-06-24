/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : Jogo Interativo
Data        : 23/06/2026
Objetivo    : Desenvolver um jogo de Sudoku interativo, utilizando matrizes, leitura de arquivos e validação de jogadas segundo as regras do Sudoku
Aprendizado : Manipulação de matrizes, funções, leitura de arquivos, estruturas de repetição e condicionais em um projeto maior
-------------------------------------------------------------------------- */

#include <stdio.h>

#define TAM 9

void mostrarSudoku(int m[TAM][TAM]) {

    printf("\n---- SUDOKU ----\n\n");

    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {

            if (m[i][j] == 0)
                printf("_ ");
            else
                printf("%d ", m[i][j]);

            if ((j + 1) % 3 == 0 && j != 8)
                printf("| ");
        }

        printf("\n");

        if ((i + 1) % 3 == 0 && i != 8)
            printf("---------------------\n");
    }

    printf("\n");
}

int sudokuCompleto(int m[TAM][TAM]) {

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            if (m[i][j] == 0)
                return 0;

    return 1;
}

int jogadaValida(int m[TAM][TAM], int linha, int coluna, int numero) {

    int i, j;

    /* posição já preenchida */
    if (m[linha][coluna] != 0)
        return 0;

    /* verifica linha */
    for (j = 0; j < TAM; j++)
        if (m[linha][j] == numero)
            return 0;

    /* verifica coluna */
    for (i = 0; i < TAM; i++)
        if (m[i][coluna] == numero)
            return 0;

    /* verifica bloco 3x3 */
    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;

    for (i = inicioLinha; i < inicioLinha + 3; i++)
        for (j = inicioColuna; j < inicioColuna + 3; j++)
            if (m[i][j] == numero)
                return 0;

    return 1;
}

int main() {

    FILE *arquivo;

    int sudoku[TAM][TAM];

    arquivo = fopen("input2.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            fscanf(arquivo, "%d", &sudoku[i][j]);

    fclose(arquivo);

    while (!sudokuCompleto(sudoku)) {

        mostrarSudoku(sudoku);

        int linha, coluna, numero;

        printf("Digite a jogada (linha coluna número): ");
        scanf("%d %d %d", &linha, &coluna, &numero);

        linha--;
        coluna--;

        if (linha < 0 || linha > 8 ||
            coluna < 0 || coluna > 8 ||
            numero < 1 || numero > 9) {

            printf("Entrada inválida! Tente novamente.\n\n");
            continue;
        }

        if (jogadaValida(sudoku, linha, coluna, numero)) {

            sudoku[linha][coluna] = numero;
            printf("Jogada aceita!\n\n");

        } else {

            printf("Jogada inválida! Tente novamente.\n\n");
        }
    }

    mostrarSudoku(sudoku);

    printf("Parabéns! Sudoku concluido!\n");

    return 0;
}
