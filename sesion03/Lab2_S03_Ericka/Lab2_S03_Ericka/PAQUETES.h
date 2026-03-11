#ifndef PAQUETES_H
#define PAQUETES_H

void ingresoPeso(double* pesos, int cantidad);
double* crearRegistro(int& cantidad);
int contarSobreLimite(const double* pesos, int cantidad, double limite);
const double* encontrarMasPesado(const double* pesos, int cantidad);
double calcularPesoTotal(const double* pesos, int cantidad);
#endif 