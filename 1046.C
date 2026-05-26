/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 26/05/2026
Objetivo    : Calcular a duração de um jogo considerando mudanças de dia no relógio de 24 horas
Aprendizado : Praticar funções, estruturas condicionais (if/else) e cálculos com ciclos de tempo
-------------------------------------------------------------------------- */

#include <stdio.h>

// função para calcular a duração do jogo
int calcularDuracao(int inicio, int fim) {

    int duracao;

    // jogo terminou no mesmo dia
    if (inicio < fim) {
        duracao = fim - inicio;
    }

    // jogo atravessou a meia-noite
    else if (inicio > fim) {
        duracao = (24 - inicio) + fim;
    }

    // início e fim iguais
    else {
        duracao = 24;
    }

    return duracao;
}

int main() {

    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    int resultado = calcularDuracao(inicio, fim);

    printf("O JOGO DUROU %d HORA(S)\n", resultado);

    return 0;
}
