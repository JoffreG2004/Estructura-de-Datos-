#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Operaciones.h"

Operaciones::Operaciones() {}

Operaciones::Operaciones(Matriz m1) {
    this->_matriz = m1;
}

// Función genérica para segmentar memoria de una matriz
int** Operaciones::segmentar(int dim) {
    int** matriz = (int**)malloc(dim * sizeof(int*));
    for (int i = 0; i < dim; i++) {
        matriz[i] = (int*)malloc(dim * sizeof(int));
    }
    return matriz;
}

// Función genérica para inicializar una matriz a cero
void Operaciones::encerar(int** matriz, int dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matriz[i][j] = 0;
        }
    }
}

// Función genérica para generar valores aleatorios en una matriz
void Operaciones::generar(int** matriz, int dim) {
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matriz[i][j] = rand() % 3;  // Genera valores entre 0 y 2
        }
    }
}

// Función genérica para imprimir una matriz
void Operaciones::imprimir(int** matriz, int dim, const char* nombre) {
    printf("\n%s:\n", nombre);
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Multiplicación de matrices
void Operaciones::procesarMulti() {
    int dim = _matriz.getDim();
    int** resultado = segmentar(dim);
    encerar(resultado, dim);

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            for (int k = 0; k < dim; k++) {
                resultado[i][j] += _matriz.getMatriz1()[i][k] * _matriz.getMatriz2()[k][j];
            }
        }
    }
    _matriz.setMatrizR(resultado);
}

// Elevar una matriz a una potencia dada
void Operaciones::procesarPot(int exp) {
    int dim = _matriz.getDim();
    int** resultado = segmentar(dim);
    encerar(resultado, dim);

    for (int e = 1; e <= exp; e++) {
        for (int i = 0; i < dim; i++) {
            for (int j = 0; j < dim; j++) {
                for (int k = 0; k < dim; k++) {
                    resultado[i][j] += _matriz.getMatriz2()[i][k] * _matriz.getMatriz2()[k][j];
                }
            }
        }
    }
    _matriz.setMatrizR(resultado);
}

// Multiplicar todos los elementos de una matriz por un escalar
void Operaciones::multiplicarEscalar(int** matriz, int dim, int escalar) {
    printf("\nMatriz multiplicada por %d:\n", escalar);
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matriz[i][j] *= escalar;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

