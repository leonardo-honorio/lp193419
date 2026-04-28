/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 28/04/2026
Objetivo    : Escrever uma "sentença dançante"
Aprendizado : Manipulação de strings, e funções como "toupper", "tolower"...
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    
    while (fgets(str, sizeof(str), stdin) != NULL) {
        int i = 0;
        int maiuscula = 1;
        
        while (str[i] != '\0') {
            if (str[i] == ' ') {
                printf(" ");
            } else {
                if (maiuscula) {
                    printf("%c", toupper(str[i]));
                } else {
                    printf("%c", tolower(str[i]));
                }

                maiuscula = !maiuscula;
            }
            i++;
        }
    }
    
    return 0;
}
