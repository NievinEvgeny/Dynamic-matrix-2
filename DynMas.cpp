#include "Matrix.h"
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int numOfRaws = rand() % 10 + 1;
    int numOfElems[numOfRaws];
    int** matrix = genRandMatrix(numOfRaws, numOfElems);
    printMatrix(matrix, numOfElems, numOfRaws);
    for (int i = 0; i < numOfRaws; i += 1)
    {
        delete matrix[i];
    }
    delete matrix;
}