#include "LastNames.h"
#include <iostream>
#include <cctype> 
using namespace std;

string AskName() {
    string fName;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << "Ingrese su nombre completo: Preferiblemente, primer nombre con ambos apellidos!!" << std::endl;
    getline(cin, fName);
    return fName;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++";
}

string FindFirstName(const string& All_name) {
    size_t posEspacio = All_name.find(' ');

    if (posEspacio == string::npos) return All_name;

    return All_name.substr(0, posEspacio);
}

string FirstLastName(const string& allName) {
    size_t posEspacio1 = allName.find(' ');


    if (posEspacio1 == string::npos) return "";

    size_t posEspacio2 = allName.find(' ', posEspacio1 + 1);


    if (posEspacio2 == string::npos) {
        return allName.substr(posEspacio1 + 1);
    }

    return allName.substr(posEspacio1 + 1, posEspacio2 - posEspacio1 - 1);
}

int vocals(const string& nombreCompleto) {
    int contador = 0;
    for (char letra : nombreCompleto) {
        char letraMin = tolower(letra);
        if (letraMin == 'a' || letraMin == 'e' || letraMin == 'i' || letraMin == 'o' || letraMin == 'u') {
            contador++;
        }
    }
    return contador;
}

string capitallWords(const string& nombreCompleto) {
    string capitall = nombreCompleto;
    for (char& letra : capitall) {
        letra = toupper(letra);
    }
    return capitall;
}

int lenght(const string& nombreCompleto) {
    return nombreCompleto.length();
}