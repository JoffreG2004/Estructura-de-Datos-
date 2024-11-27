
/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
 
#ifndef NODO_H
#define NODO_H

#include <string>

class Nodo {
public:
    std::string nombre;
    std::string apellido;
    Nodo* siguiente;

    Nodo(std::string nombre, std::string apellido);
    Nodo* getSiguiente();
    void setSiguiente(Nodo* siguiente);
};

#endif
