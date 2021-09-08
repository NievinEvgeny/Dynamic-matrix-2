#include <iostream>
using namespace std;

int** genRandMatrix(int numOfRaws, int* numOfElems)
{
    int** matrix = new int*[numOfRaws];
    for (int g = 0; g < numOfRaws; g += 1)
    {
        numOfElems[g] = rand() % 10 + 1;
        matrix[g] = new int[numOfElems[g]];
    }
    for (int i = 0; i < numOfRaws; i += 1)
    {
        for (int j = 0; j < numOfElems[i]; j += 1)
        {
            matrix[i][j] = rand() % 10;
        }
    }
    return matrix;
}

void printMatrix(int** matrix, int* numOfElems, int numOfRaws)
{
    cout << "Num of raws: " << numOfRaws << "\n";
    for (int i = 0; i < numOfRaws; i += 1)
    {
        for (int j = 0; j < numOfElems[i]; j += 1)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}