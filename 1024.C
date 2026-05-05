/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 05/05/2026
Objetivo    : Construir um algoritmo que criptografe uma string aplicando transformações sequenciais
Aprendizado : Construção e manipulação de strings, uso da tabela ASCII para tranformação de caracteres
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // consumir o ENTER

    while (N--) {
        char str[1001];
        fgets(str, 1001, stdin);

        int tam = strlen(str);

        // remover o \n do final (se existir)
        if (str[tam - 1] == '\n') {
            str[tam - 1] = '\0';
            tam--;
        }

        int i;

        //  1ª etapa: deslocar letras +3
        for (i = 0; i < tam; i++) {
            if ((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z')) {
                str[i] += 3;
            }
        }

        //  2ª etapa: inverter a string
        for (i = 0; i < tam / 2; i++) {
            char temp = str[i];
            str[i] = str[tam - 1 - i];
            str[tam - 1 - i] = temp;
        }

        //  3ª etapa: metade final -1
        for (i = tam / 2; i < tam; i++) {
            str[i] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
