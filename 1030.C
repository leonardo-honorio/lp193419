/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 23/06/2026
Objetivo    : Determinar qual pessoa permanece viva após sucessivas eliminações em um círculo seguindo um salto fixo
Aprendizado : Recursão matemática, operadores de módulo (%)...
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int n, int k) {

    int sobrevivente = 0;
    int i;

    for (i = 2; i <= n; i++) {
        sobrevivente = (sobrevivente + k) % i;
    }

    return sobrevivente + 1;
}

int main() {

    int NC;
    scanf("%d", &NC);

    int caso;

    for (caso = 1; caso <= NC; caso++) {

        int n, k;

        scanf("%d %d", &n, &k);

        printf("Case %d: %d\n", caso, josephus(n, k));
    }

    return 0;
}
