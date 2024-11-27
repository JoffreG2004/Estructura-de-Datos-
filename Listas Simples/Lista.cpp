/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
 
#include "lista.h"
#include <iostream>

Lista::Lista() {
    cabeza = nullptr;
}

Lista::~Lista() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* siguiente = actual->getSiguiente();
        delete actual;
        actual = siguiente;
    }
}

void Lista::crear(std::string nombre, std::string apellido) {
    Nodo* nuevoNodo = new Nodo(nombre, apellido);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        Nodo* temp = cabeza;
        while (temp->getSiguiente() != nullptr) {
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(nuevoNodo);
    }
}

void Lista::mostrar() {
    Nodo* temp = cabeza;
    if (temp == nullptr) {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }
    while (temp != nullptr) {
        std::cout << "Nombre: " << temp->nombre << ", Apellido: " << temp->apellido << std::endl;
        temp = temp->getSiguiente();
    }
}

void Lista::actualizar(std::string nombreViejo, std::string apellidoViejo, std::string nuevoNombre, std::string nuevoApellido) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        if (temp->nombre == nombreViejo && temp->apellido == apellidoViejo) {
            temp->nombre = nuevoNombre;
            temp->apellido = nuevoApellido;
            std::cout << "Nodo actualizado." << std::endl;
            return;
        }
        temp = temp->getSiguiente();
    }
    std::cout << "No se encontró el nodo." << std::endl;
}

void Lista::eliminar(std::string nombre, std::string apellido) {
    Nodo* temp = cabeza;
    Nodo* prev = nullptr;

    if (temp != nullptr && temp->nombre == nombre && temp->apellido == apellido) {
        cabeza = temp->getSiguiente();
        delete temp;
        std::cout << "Nodo eliminado." << std::endl;
        return;
    }

    while (temp != nullptr && (temp->nombre != nombre || temp->apellido != apellido)) {
        prev = temp;
        temp = temp->getSiguiente();
    }

    if (temp == nullptr) {
        std::cout << "Nodo no encontrado." << std::endl;
        return;
    }

    prev->setSiguiente(temp->getSiguiente());
    delete temp;
    std::cout << "Nodo eliminado." << std::endl;
}

bool Lista::estaVacia() {
    return cabeza == nullptr;
}

bool Lista::correoExiste(const std::string& correo) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        std::string correoGenerado = generarCorreo(temp->nombre, temp->apellido);
        if (correoGenerado == correo) {
            return true;
        }
        temp = temp->getSiguiente();
    }
    return false;
}

std::string Lista::generarCorreo(const std::string& nombre, const std::string& apellido) {
    std::string correo = nombre.substr(0, 1) + apellido + "@espe.edu.ec";
    return correo;
}

