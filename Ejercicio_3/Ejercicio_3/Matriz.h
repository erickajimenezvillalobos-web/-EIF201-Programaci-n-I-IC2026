#pragma once
#ifndef Matriz_h
#define Matriz_h

void fillMatriz(int matrix[3][3]);

void printMatriz(int matrix[3][3]);

void plusFilas(int matrix[3][3], int sum[3]);

void plusColumns(int matrix[3][3], int sum[3]);

void plusDiagonals(int matrix[3][3], int& sumMain, int& sumSecondary);

#endif