/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 28/04/2026
Objetivo    : Escrever uma "Cifra de César" modificada
Aprendizado : Escrever um algoritmo que lê a criptografia, baseada em uma modificação da cifra de César, e mostra a frase já decodificada
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char str[60];
        int desloc;

        scanf("%s", str);
        scanf("%d", &desloc);

        int i = 0;
        while (str[i] != '\0') {
            char c = str[i] - desloc;

            if (c < 'A') {
                c = c + 26;
            }

            printf("%c", c);
            i++;
        }

        printf("\n");
    }

    return 0;
}
