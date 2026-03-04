#include <iostream>
#include <string>
#include "LastNames.h"

using namespace std;

int main() {

    string indeedName = AskName();


    cout << "\n--- Resultados del Procesamiento ---" << endl;
    cout << "El primer nombre extraido de la cadena: " << FindFirstName(indeedName) << endl;
    cout << "El primer apellido extraido de la cadena: " << FirstLastName(indeedName) << endl;
    cout << "La cantidad total de vocales: " << vocals(indeedName) << endl;
    cout << "El nombre completo en mayusculas: " << capitallWords(indeedName) << endl;
    cout << "La longitud total del nombre: " << lenght(indeedName) << " caracteres" << endl;

    return 0;
}