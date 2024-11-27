/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
 
#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
#include <string>

class Lista {
private:
    Nodo* cabeza;

public:
    Lista();
    ~Lista();

    void crear(std::string nombre, std::string apellido);
    void mostrar();
    void actualizar(std::string nombreViejo, std::string apellidoViejo, std::string nuevoNombre, std::string nuevoApellido);
    void eliminar(std::string nombre, std::string apellido);
    bool estaVacia();
    bool correoExiste(const std::string& correo);
    std::string generarCorreo(const std::string& nombre, const std::string& apellido);
};

#endif