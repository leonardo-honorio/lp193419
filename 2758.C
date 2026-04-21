/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 21/04/2026
Objetivo    : Criar variáveis de precisão simples e dupla, ler valores e apresentar com diferentes casas decimais, notação científica...
Aprendizado : Apresentação de valores de diferentes maneiras
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    float A, B;
    double C, D;
    
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%lf", &C);
    scanf("%lf", &D);
    
    // 1
    printf("A = %f, B = %f\n", A, B);
    // 2
    printf("C = %lf, D = %lf\n", C, D);
    // 3
    printf("A = %.1f, B = %.1f\n", A, B);
    // 4
    printf("C = %.1lf, D = %.1lf\n", C, D);
    // 5
    printf("A = %.2f, B = %.2f\n", A, B);
    // 6
    printf("C = %.2lf, D = %.2lf\n", C, D);
    // 7
    printf("A = %.3f, B = %.3f\n", A, B);
    // 8
    printf("C = %.3lf, D = %.3lf\n", C, D);
    // 9 (notação científica)
    printf("A = %.3E, B = %.3E\n", A, B);
    // 10 (notação científica)
    printf("C = %.3lE, D = %.3lE\n", C, D);
    // 11 (parte inteira)
    printf("A = %.0f, B = %.0f\n", A, B);
    // 12 (parte inteira)
    printf("C = %.0lf, D = %.0lf\n", C, D);

    return 0;
}
