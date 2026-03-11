#include <iostream>
#include <iomanip>
#include "PAQUETES.H"

int main() {
	int cantidad = 0;
	double* pesos = crearRegistro(cantidad);
	ingresoPeso(pesos, cantidad);
	double total = calcularPesoTotal(pesos, cantidad);
	double promedio = total / cantidad;

	double limite;
	std::cout << "Ingrese el limite de peso del peso permitido: ";
	std::cin >> limite;

	int arribaLimite = contarSobreLimite(pesos, cantidad, limite);
	const double* masPesado = encontrarMasPesado(pesos, cantidad);
	//std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n --- RESULTADOS ---\n";
	std::cout << "Promedio: " << promedio << "kg\n";
	std::cout << "Tital: " << total << "kg\n";
	std::cout << "El paquete mas pesado: " << *masPesado << " kg\n";
	std::cout << "Los paquetes que tienen limite de peso: " << limite << "kg: " << arribaLimite;
	delete[] pesos;
	pesos = nullptr;
	return 0;
}

