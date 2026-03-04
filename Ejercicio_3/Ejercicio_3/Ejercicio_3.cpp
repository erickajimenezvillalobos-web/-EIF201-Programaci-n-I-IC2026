#include <iostream>
#include "Matriz.h"

using namespace std;

int main() {
    int MATRIZ[3][3];
    int sumaF[3];
    int sumaC[3];
    int diagPrin, diagSec;

    cout << "--- Llenar la matriz 3x3 ---" << endl;
    fillMatriz(MATRIZ);

    cout << "\n--- Matriz ingresada ---" << endl;
    // Aquí verás la magia de setw() en acción
    printMatriz(MATRIZ);

    // Llamamos a las demás funciones para que calculen los datos
    plusFilas(MATRIZ, sumaF);
    plusColumns(MATRIZ, sumaC);
    plusDiagonals(MATRIZ, diagPrin, diagSec);

    return 0;
}