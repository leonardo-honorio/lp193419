/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 23/06/2026
Objetivo    : Utilizar uma função recursiva para calcular termos da sequência de Fibonacci e contabilizar o número de chamadas recursivas realizadas
Aprendizado : Funcionamento da recursão e a construção da árvore de chamadas recursivas
-------------------------------------------------------------------------- */

#include <stdio.h>

int chamadas;

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    chamadas += 2;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int N, X;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &X);

        chamadas = 0;

        int resultado = fibonacci(X);

        printf("fib(%d) = %d calls = %d\n",
               X, chamadas, resultado);
    }

    return 0;
}
