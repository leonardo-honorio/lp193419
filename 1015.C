/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 26/05/2026
Objetivo    : Calcular a distância entre dois pontos em um plano cartesiano utilizando suas coordenadas
Aprendizado : Aplicação de funções matemáticas básicas através da biblioteca
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1;
    double x2, y2;
    double distancia;

    // Leitura das coordenadas do primeiro ponto
    scanf("%lf %lf", &x1, &y1);
    
    // Leitura das coordenadas do segundo ponto
    scanf("%lf %lf", &x2, &y2);

    // Cálculo da distância utilizando a fórmula fornecida
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibição do resultado com 4 casas decimais
    printf("%.4lf\n", distancia);

    return 0;
}
