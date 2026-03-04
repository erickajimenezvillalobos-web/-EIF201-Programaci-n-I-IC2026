#include "Matriz.h"
#include <iostream>
#include <iomanip>
using namespace std;

void fillMatriz(int matrix[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << "Enter element [" << i << "][" << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}
}
void plusFilas(int matrix[3][3], int sum[3]) {
	for (int i = 0; i < 3; ++i) {
		sum[i] = 0;
		for (int j = 0; j < 3; ++j) {
			sum[i] += matrix[i][j];
		}
	}
}
void plusColumns(int matrix[3][3], int sum[3]) {
	for (int j = 0; j < 3; ++j) {
		sum[j] = 0;
		for (int i = 0; i < 3; ++i) {
			sum[j] += matrix[i][j];
		}
	}
}
void plusDiagonals(int matrix[3][3], int& sumMain, int& sumSecondary) {
	sumMain = 0;
	sumSecondary = 0;
	for (int i = 0; i < 3; ++i) {
		sumMain += matrix[i][i]; 
		sumSecondary += matrix[i][2 - i]; 
	}
}

void printMatriz(int matrix[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}