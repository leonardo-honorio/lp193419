/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 23/06/2026
Objetivo    : Utilizar o cálculo do MDC entre dois números para determinar o maior tamanho possível das pilhas de figurinhas que podem ser trocadas
Aprendizado : Resolver problemas envolvendo divisibilidade e cálculos de MDC
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int F1, F2;

        scanf("%d %d", &F1, &F2);

        printf("%d\n", mdc(F1, F2));
    }

    return 0;
}
