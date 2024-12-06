/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
#pragma once
//#include "Nodo.cpp"
#include "Nodo.h"

using namespace std;

template <typename T>
class Lista_Simple {
private:
    Nodo<T>* cabeza;

public:
    Lista_Simple();                             // Constructor
    void Insertar_cabeza(T);                    // Método para insertar al final de la lista
    bool Buscar(T);                             // Método para buscar un dato en la lista, ahora devuelve bool
    void Eliminar(T);                           // Método para eliminar un dato de la lista
    void Mostrar();                             // Método para mostrar todos los datos en la lista

    bool validarNombres(const string& dato);    // Función para validar que solo tenga letras y espacios
    bool validarNumeros(const string& cedula);  // Función para validar que solo tenga números
    string ingresarNombres();                   // Función para ingresar y validar nombres
    string ingresarCedula();                    // Función para ingresar y validar cédula
    string generarCorreo(const string& nombres, const string& apellidos, Lista_Simple<string>* correos); // Generar correo
};
