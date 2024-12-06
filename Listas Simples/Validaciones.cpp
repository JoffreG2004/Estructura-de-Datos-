/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/

#include "Validaciones.h"
#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

template <typename T>
Validaciones<T>::Validaciones() {}

template <typename T>
T Validaciones<T>::ingresar(const string& msj, const string& tipo) {
    string input;
    T valor;

    cout << msj;
    while (true) {
        getline(cin, input);

        if (tipo == "string") {
            if (esCadenaValida(input)) {
                valor = input;
                break;
            } else {
                cout << "Entrada invalida. Por favor ingrese una cadena valida (solo letras y espacios): ";
            }
        } else {
            cout << "Tipo no valido.\n";
            break;
        }
    }

    return valor;
}

// Función para validar que la cadena solo contenga letras y espacios
template <typename T>
bool Validaciones<T>::esCadenaValida(const string& dato) {
    for (char c : dato) {
        if (!isalpha(c) && !isspace(c)) {
            return false;
        }
    }
    return true;
}

// Especialización del método para tipo string
template<>
bool Validaciones<string>::esPalabraProhibida(const string& dato) {
    // Lista de palabras prohibidas (como "de la cruz", "del rosio", etc.)
    string palabrasProhibidas[] = {"de la cruz", "del rosio", "marquez"};
    for (const string& palabra : palabrasProhibidas) {
        if (dato.find(palabra) != string::npos) {
            return true;
        }
    }
    return false;
}

// Explicita la instanciación para los tipos que usas
template class Validaciones<string>;
