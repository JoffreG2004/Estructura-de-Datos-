/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                         Joffre Esteban Gomez Quinaluisa                      *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#pragma once
#include "Matriz.h"
class Operaciones{
	public:
		Operaciones();
		Operaciones(Matriz);
		void segmentar();
		int **generarMatriz();
		void encerar();
		void procesarPot(int);
		void procesarMulti();
		void imprimir();
		void multiplicarEscalar(int **);
		void imprimirEscalar(int **);
	private:
		Matriz _matriz;
};