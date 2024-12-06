/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

using namespace std;

template <typename T>
class Validaciones {
public:
    Validaciones();
    T ingresar(const string& msj, const string& tipo);
    bool esCadenaValida(const string& dato);
    bool esPalabraProhibida(const string& dato);
};

#endif
