/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 23/06/2026
Objetivo    : Determinar o menor valor de salto m que faz com que a região 13 seja a última região restante após sucessivas eliminações circulares
Aprendizado : Problema de Josephus em um contexto prático. Simulação circular, vetores e estruturas de repetição, eliminações sucessivas
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int josephus(int n, int m)
{
    int regioes[101];
    int vivos = n;
    int pos = 0;

    for(int i = 0; i < n; i++)
        regioes[i] = i + 1;

    while(vivos > 1)
    {
        int cont = 0;

        while(cont < m)
        {
            if(regioes[pos] != 0)
                cont++;

            if(cont == m)
                break;

            pos = (pos + 1) % n;
        }

        regioes[pos] = 0;
        vivos--;

        while(regioes[pos] == 0)
            pos = (pos + 1) % n;
    }

    for(int i = 0; i < n; i++)
    {
        if(regioes[i] != 0)
            return regioes[i];
    }

    return -1;
}

int main()
{
    int N;

    while(cin >> N && N)
    {
        int m = 1;

        while(true)
        {
            if(josephus(N - 1, m) == 12)
            {
                cout << m << endl;
                break;
            }

            m++;
        }
    }

    return 0;
}
