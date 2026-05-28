/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : Calcular a quantidade de trigo em kg usando duplicação sequencial em um tabuleiro
Aprendizado : Manipulação de bits e uso de tipos inteiros de 64 bits
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    while(N--){
        int X;
        scanf("%d", &X);
        
        unsigned long long graos = 0;
        unsigned long long atual = 1;
        
        int i;
        
        for(i = 0; i < X; i++){
            graos += atual;
            atual *= 2;
        }
        
        unsigned long long kg = graos / 12000;
        
        printf("%llu kg\n", kg);
    }

    return 0;
}
