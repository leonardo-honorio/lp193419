/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 26/05/2026
Objetivo    : Separar números pares e ímpares em vetores distintos, imprimindo-os sempre que atingirem capacidade máxima
Aprendizado : Praticar vetores, controle de índices, estruturas condicionais e manipulação dinâmica de armazenamento temporário
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int par[5], impar[5];
    int qtdPar = 0, qtdImpar = 0;
    int num;
    int i;

    for (i = 0; i < 15; i++) {

        scanf("%d", &num);

        // número par
        if (num % 2 == 0) {

            par[qtdPar] = num;
            qtdPar++;

            // se o vetor encher
            if (qtdPar == 5) {

                int j;

                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }

                qtdPar = 0;
            }
        }

        // número ímpar
        else {

            impar[qtdImpar] = num;
            qtdImpar++;

            // se o vetor encher
            if (qtdImpar == 5) {

                int j;

                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }

                qtdImpar = 0;
            }
        }
    }

    // imprime restantes do vetor ímpar
    for (i = 0; i < qtdImpar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    // imprime restantes do vetor par
    for (i = 0; i < qtdPar; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
