/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 26/05/2026
Objetivo    : Organizar registros de camisetas aplicando múltiplos critérios de ordenação
Aprendizado : Praticar struct, manipulação de strings e algoritmos de ordenação com critérios encadeados
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

struct Camisa {
    char nome[100];
    char cor[20];
    char tamanho;
};

int main() {

    int N;
    int primeiro = 1;

    while (scanf("%d", &N) && N != 0) {

        getchar();

        struct Camisa c[N];

        int i, j;

        for (i = 0; i < N; i++) {

            fgets(c[i].nome, 100, stdin);
            c[i].nome[strcspn(c[i].nome, "\n")] = '\0';

            scanf("%s %c", c[i].cor, &c[i].tamanho);

            getchar();
        }

        // ORDENAÇÃO
        for (i = 0; i < N - 1; i++) {

            for (j = i + 1; j < N; j++) {

                int troca = 0;

                // 1° critério: cor
                if (strcmp(c[i].cor, c[j].cor) > 0) {
                    troca = 1;
                }

                // 2° critério: tamanho
                else if (strcmp(c[i].cor, c[j].cor) == 0) {

                    if (c[i].tamanho < c[j].tamanho) {
                        troca = 1;
                    }

                    // 3° critério: nome
                    else if (c[i].tamanho == c[j].tamanho) {

                        if (strcmp(c[i].nome, c[j].nome) > 0) {
                            troca = 1;
                        }
                    }
                }

                // troca os elementos
                if (troca) {

                    struct Camisa temp = c[i];
                    c[i] = c[j];
                    c[j] = temp;
                }
            }
        }

        // linha em branco entre casos
        if (!primeiro) {
            printf("\n");
        }

        primeiro = 0;

        // saída
        for (i = 0; i < N; i++) {
            printf("%s %c %s\n",
                   c[i].cor,
                   c[i].tamanho,
                   c[i].nome);
        }
    }

    return 0;
}
