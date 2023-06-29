#include <bits/stdc++.h>
using namespace std;

int contarSubmatriz(const vector<vector<int>> &matrizA, const vector<vector<int>> &submatrizB)
{
    int count = 0;

    int LinhasA = matrizA.size();
    int ColunasA = matrizA[0].size();

    int LinhasB = submatrizB.size();
    int ColunasB = submatrizB[0].size();

    for (int i = 0; i <= LinhasA - LinhasB; i++)
    {
        for (int j = 0; j <= ColunasA - ColunasB; j++)
        {
            bool encontrada = true;

            for (int k = 0; k < LinhasB; k++)
            {
                for (int l = 0; l < ColunasB; l++)
                {
                    if (matrizA[i + k][j + l] != submatrizB[k][l])
                    {
                        encontrada = false;
                        break;
                    }
                }
                if (!encontrada)
                    break;
            }

            if (encontrada)
                count++;
        }
    }

    return count;
}

int main()
{
    vector<vector<int>> matrizA = {{1, 2, 3, 4},
                                   {5, 6, 7, 8},
                                   {9, 1, 2, 3},
                                   {4, 5, 6, 7}};

    vector<vector<int>> submatrizB = {{1, 2},
                                      {5, 6}};

    int ocorrencias = contarSubmatriz(matrizA, submatrizB);
    cout << "A submatriz B ocorre " << ocorrencias << " vezes na matriz A." << endl;

    return 0;
}
