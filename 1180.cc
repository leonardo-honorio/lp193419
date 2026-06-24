/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : Praticar o uso de vetores, percorrendo seus elementos para encontrar o menor valor armazenado e sua respectiva posição
Aprendizado : Aprender a realizar buscas em vetores utilizando variáveis auxiliares para armazenar o menor valor encontrado e o índice onde ele está localizado
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int X[N];

    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int menor = X[0];
    int posicao = 0;

    for (int i = 1; i < N; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
