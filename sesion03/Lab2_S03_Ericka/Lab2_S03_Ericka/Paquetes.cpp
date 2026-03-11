#include "PAQUETES.H"
#include <iostream>
void ingresoPeso(double* peso, int cantidad) {
	for (int i=0; i<cantidad;i++) {
		do {
			std::cout << "Ingresar el peso del paquete: ";
			std::cin >> peso[i];
			if (peso[i] <= 0) {
				std::cout << "Error, el peso no puede ser 0.\n";
			}
		} while (peso[i] <= 0);
	}
}
double* crearRegistro(int& cantidad) {
	do {
		std::cout << "Ingresar cantidad de paquetes: ";
		std::cin >> cantidad;

		if (cantidad <= 0) {
			std::cout << "Error, los paquetes no pueden ser 0.\n";
		}
	} while (cantidad <= 0);

	double* peso = new double[cantidad];
	return peso;
}
int contarSobreLimite(const double* peso, int cantidad, double limite) {
	int contador = 0;
	for (int i=0;i<cantidad;i++) {
		if (peso[i] > limite) {
			contador++;
		}
	}
	return contador;
}
const double* encontrarMasPesado(const double* peso, int cantidad) {
	const double* mayor = &peso[0];
	for (int i=0;i<cantidad;i++) {
		if (peso[i] > *mayor) {
			mayor=&peso[i];
		}
	}
	return mayor;
}
double calcularPesoTotal(const double* peso, int cantidad) {
	double sumar=0.0;
	for (int i=0;i<cantidad;i++) {
		sumar+=peso[i];
	}
	return sumar;
}
