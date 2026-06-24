/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 23/06/2026
Objetivo    : Determinar qual pessoa permanece viva após sucessivas eliminações em um círculo seguindo um salto fixo
Aprendizado : Recursão matemática, manipulação de vetores, contagem circular usando operador %
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 0;

    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    int NC;
    cin >> NC;

    for (int i = 1; i <= NC; i++)
    {
        int n, k;
        cin >> n >> k;

        cout << "Case " << i << ": "
             << josephus(n, k) + 1 << endl;
    }

    return 0;
}
