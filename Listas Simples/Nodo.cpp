/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
// Nodo.cpp
#include "Nodo.h"

template <typename T>
Nodo<T>::Nodo(T _dato) {
    dato = _dato;
    siguiente = NULL;
}

template <typename T>
T Nodo<T>::getDato() {
    return dato;
}

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
    return siguiente;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T>* _siguiente) {
    siguiente = _siguiente;
}

// Necesitamos instanciar la plantilla para el tipo que usaremos
template class Nodo<std::string>;
