/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, Turma IB, 2026S1
Nome        : Leonardo Rissato Honório
Linguagem   : C
Problema    : Jogo Interativo
Data        : 23/06/2026
Objetivo    : Desenvolver um jogo de Sudoku interativo, utilizando matrizes, leitura de arquivos e validação de jogadas segundo as regras do Sudoku
Aprendizado : Manipulação de matrizes, funções, leitura de arquivos, estruturas de repetição e condicionais em um projeto maior
-------------------------------------------------------------------------- */

#include <iostream>
#include <fstream>

using namespace std;

const int TAM = 9;

void mostrarSudoku(int sudoku[TAM][TAM])
{
    cout << "\n===== SUDOKU =====\n\n";

    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            if(sudoku[i][j] == 0)
                cout << "_ ";
            else
                cout << sudoku[i][j] << " ";

            if((j + 1) % 3 == 0 && j != 8)
                cout << "| ";
        }

        cout << endl;

        if((i + 1) % 3 == 0 && i != 8)
            cout << "---------------------" << endl;
    }

    cout << endl;
}

bool sudokuCompleto(int sudoku[TAM][TAM])
{
    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            if(sudoku[i][j] == 0)
                return false;
        }
    }

    return true;
}

bool jogadaValida(int sudoku[TAM][TAM],
                  int linha,
                  int coluna,
                  int numero)
{
    if(sudoku[linha][coluna] != 0)
        return false;

    for(int j = 0; j < TAM; j++)
    {
        if(sudoku[linha][j] == numero)
            return false;
    }

    for(int i = 0; i < TAM; i++)
    {
        if(sudoku[i][coluna] == numero)
            return false;
    }

    int inicioLinha = (linha / 3) * 3;
    int inicioColuna = (coluna / 3) * 3;

    for(int i = inicioLinha; i < inicioLinha + 3; i++)
    {
        for(int j = inicioColuna; j < inicioColuna + 3; j++)
        {
            if(sudoku[i][j] == numero)
                return false;
        }
    }

    return true;
}

int main()
{
    int sudoku[TAM][TAM];

    ifstream arquivo("input2.txt");

    if(!arquivo)
    {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            arquivo >> sudoku[i][j];
        }
    }

    arquivo.close();

    while(!sudokuCompleto(sudoku))
    {
        mostrarSudoku(sudoku);

        int linha;
        int coluna;
        int numero;

        cout << "Linha (1-9): ";
        cin >> linha;

        cout << "Coluna (1-9): ";
        cin >> coluna;

        cout << "Numero (1-9): ";
        cin >> numero;

        linha--;
        coluna--;

        if(linha < 0 || linha > 8 ||
           coluna < 0 || coluna > 8 ||
           numero < 1 || numero > 9)
        {
            cout << "\nEntrada inválida! Tente novamente.\n\n";
            continue;
        }

        if(jogadaValida(sudoku,
                        linha,
                        coluna,
                        numero))
        {
            sudoku[linha][coluna] = numero;

            cout << "\nJogada aceita!\n\n";
        }
        else
        {
            cout << "\nJogada inválida! Tente novamente.\n\n";
        }
    }

    mostrarSudoku(sudoku);

    cout << "Parabéns! Sudoku concluido!" << endl;

    return 0;
}
