/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 26/05/2026
Objetivo    : Calcular a quantidade de combustível gasta em uma viagem usando tempo, velocidade média e consumo do veículo
Aprendizado : Praticar criação de funções, uso do tipo float e aplicação de fórmulas matemáticas simples em C
-------------------------------------------------------------------------- */

#include <stdio.h>

// função para calcular os litros gastos
float calcularLitros(int tempo, int velocidade) {

    float distancia;
    float litros;

    distancia = tempo * velocidade;

    litros = distancia / 12.0;

    return litros;
}

int main() {

    int tempo;
    int velocidade;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    float resultado = calcularLitros(tempo, velocidade);

    printf("%.3f\n", resultado);

    return 0;
}
