/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#include "Lista_Simple.h"
#include <cctype>
#include <conio.h>

using namespace std;

template <typename T>
Lista_Simple<T>::Lista_Simple() {
    cabeza = NULL;
}

template <typename T>
void Lista_Simple<T>::Insertar_cabeza(T _dato) {
    Nodo<T>* nuevo = new Nodo<T>(_dato);
    if (cabeza == NULL) {
        cabeza = nuevo;
    }
    else {
        Nodo<T>* aux = cabeza;
        while (aux->getSiguiente() != NULL) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }
}

// Método Buscar corregido para devolver un valor booleano
template <typename T>
bool Lista_Simple<T>::Buscar(T _dato) {
    Nodo<T>* aux = cabeza;
    while (aux != NULL) {
        if (aux->getDato() == _dato) {
            // El dato se encuentra en la lista
            return true;  // Retorna true si se encuentra
        }
        aux = aux->getSiguiente();
    }
    // Si no se encuentra
    return false;  // Retorna false si no se encuentra
}

template <typename T>
void Lista_Simple<T>::Eliminar(T _dato) {
    Nodo<T>* aux = cabeza;
    Nodo<T>* anterior = NULL;
    while (aux != NULL) {
        if (aux->getDato() == _dato) {
            if (anterior == NULL) {
                cabeza = aux->getSiguiente();
            }
            else {
                anterior->setSiguiente(aux->getSiguiente());
            }
            delete aux;
            cout << "El dato " << _dato << " se ha eliminado de la lista" << endl;
            return;
        }
        anterior = aux;
        aux = aux->getSiguiente();
    }
    cout << "El dato " << _dato << " no se encuentra en la lista" << endl;
}

template <typename T>
void Lista_Simple<T>::Mostrar() {
    Nodo<T>* aux = cabeza;
    while (aux != NULL) {
        cout << aux->getDato() << " -> ";
        aux = aux->getSiguiente();
    }
    cout << "NULL" << endl;
}

string generarCorreo(const string& nombres, const string& apellidos, Lista_Simple<string>* correos) {
    string correo;

    bool nuevaPalabra = true;
    for (char c : nombres) {
        if (nuevaPalabra && c != ' ') {
            correo += tolower(c);
            nuevaPalabra = false;
        }
        if (c == ' ') {
            nuevaPalabra = true;
        }
    }

    size_t posEspacio = apellidos.find(' ');
    string primerApellido;
    if (posEspacio != string::npos) {
        primerApellido = apellidos.substr(0, posEspacio);
    } else {
        primerApellido = apellidos;
    }

    for (char c : primerApellido) {
        correo += tolower(c);
    }

    correo += "@espe.edu.ec";

    string correoOriginal = correo;
    int contador = 1;

    // Ahora Buscar devuelve un valor booleano, por lo tanto funciona correctamente
    while (correos->Buscar(correo)) {
        correo = correoOriginal.substr(0, correoOriginal.find('@')) + to_string(contador) + correoOriginal.substr(correoOriginal.find('@'));
        contador++;
    }

    return correo;
}
