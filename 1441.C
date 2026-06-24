/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 23/06/2026
Objetivo    : Geração da Sequência de Granizo e determinar o maior valor alcançado durante sua execução até chegar ao número 1
Aprendizado : Estruturas de repetição, testes condicionais e o acompanhamento de valores máximos
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    long long H;

    while (1)
    {
        scanf("%lld", &H);

        if (H == 0)
            break;

        long long maior = H;
        long long atual = H;

        while (atual != 1)
        {
            if (atual % 2 == 0)
                atual = atual / 2;
            else
                atual = 3 * atual + 1;

            if (atual > maior)
                maior = atual;
        }

        printf("%lld\n", maior);
    }

    return 0;
}
