/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 21/04/2026
Objetivo    : Ler três valores e apresentar qual o maior dos três
Aprendizado : Verificar qual é o maior dos três valores lidos
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int maiorAB,maior;
    
    scanf("%d%d%d",&a,&b,&c);
    
    maiorAB=(a+b+abs(a-b))/2;
    maior=(maiorAB+c+abs(maiorAB-c))/2;
    
    printf("%d eh o maior",maior);

    return 0;
}
