/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 23/06/2026
Objetivo    : Praticar manipulação de vetores, realizando a troca de elementos simétricos
Aprendizado : Aprender a inverter um vetor utilizando índices e uma variável auxiliar para realizar trocas de valores
-------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main() {
    int N[20];
    
    // Leitura do vetor
    for (int i = 0; i < 20; i++) {
        cin >> N[i];
    }

    // Troca dos elementos
    for (int i = 0; i < 10; i++) {
        int aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    // Impressão do vetor
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
