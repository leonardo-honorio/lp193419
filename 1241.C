/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Verificar se o valor de B corresponde aos últimos dígitos do valor de A
Aprendizado : Construção e manipulação de strings
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char A[1010], B[1010];

        scanf("%s %s", A, B);

        int tamanhoA = strlen(A);
        int tamanhoB = strlen(B);

        int encaixa = 1;

        if (tamanhoB > tamanhoA) {
            encaixa = 0;
        } else {
            int i;
            for (i = 0; i < tamanhoB; i++) {
                if (A[tamanhoA - 1 - i] != B[tamanhoB - 1 - i]) {
                    encaixa = 0;
                    break;
                }
            }
        }

        if (encaixa) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}
