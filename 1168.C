/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 26/05/2026
Objetivo    : Calcular a quantidade total de LEDs necessários para representar números em um painel digital
Aprendizado : Praticar strings, estruturas de repetição e seleção múltipla usando switch-case
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {

    int N;
    scanf("%d", &N);

    while (N--) {

        char numero[101];
        int i;
        int leds = 0;

        scanf("%s", numero);

        for (i = 0; i < strlen(numero); i++) {

            switch (numero[i]) {

                case '1':
                    leds += 2;
                    break;

                case '2':
                case '3':
                case '5':
                    leds += 5;
                    break;

                case '4':
                    leds += 4;
                    break;

                case '6':
                case '9':
                case '0':
                    leds += 6;
                    break;

                case '7':
                    leds += 3;
                    break;

                case '8':
                    leds += 7;
                    break;
            }
        }

        printf("%d leds\n", leds);
    }

    return 0;
}
