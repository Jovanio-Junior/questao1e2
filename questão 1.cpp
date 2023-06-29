#include <bits/stdc++.h>
using namespace std;


void inverterDiagonais(vector<vector<int>>& matriz) {
    int tamanho = matriz.size();

    for (int i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        swap(matriz[i][i], matriz[j][j]); // Inverte a diagonal principal
        swap(matriz[i][j], matriz[j][i]); // Inverte a diagonal secundária
    }
}

int main() {
    vector<vector<int>> matriz = {{1, 2, 3},
                                 {4, 5, 6},
                                 {7, 8, 9}};


    cout << "Imprime a matriz antes de inverter as diagonais" << endl;
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            cout << elemento << " ";
        }
        cout << endl;
    }


    inverterDiagonais(matriz);


    cout << endl << "Imprime a matriz apos inverter as diagonais" << endl;
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

