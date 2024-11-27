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
#include <string>

Lista::Lista() {
    cabeza = nullptr;
}

Lista::~Lista() {
    Nodo* actual = cabeza;
    Nodo* siguiente;
    
    while (actual != nullptr) {
        siguiente = actual->getSiguiente();
        delete actual;
        actual = siguiente;
    }
}

void Lista::crear(std::string nombre, std::string apellido) {
    Nodo* nuevoNodo = new Nodo(nombre, apellido);
    if (estaVacia()) {
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
    if (estaVacia()) {
        std::cout << "La lista estÃ¡ vacÃ­a.\n";
        return;
    }
    Nodo* temp = cabeza;
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
            std::cout << "Nodo actualizado.\n";
            return;
        }
        temp = temp->getSiguiente();
    }
    std::cout << "No se encontrÃ³ el nodo a actualizar.\n";
}

void Lista::eliminar(std::string nombre, std::string apellido) {
    Nodo* temp = cabeza;
    Nodo* prev = nullptr;

    if (temp != nullptr && temp->nombre == nombre && temp->apellido == apellido) {
        cabeza = temp->getSiguiente();
        delete temp;
        std::cout << "Nodo eliminado.\n";
        return;
    }

    while (temp != nullptr && (temp->nombre != nombre || temp->apellido != apellido)) {
        prev = temp;
        temp = temp->getSiguiente();
    }

    if (temp == nullptr) {
        std::cout << "Nodo no encontrado.\n";
        return;
    }

    prev->setSiguiente(temp->getSiguiente());
    delete temp;
    std::cout << "Nodo eliminado.\n";
}

bool Lista::estaVacia() {
    return cabeza == nullptr;
}

// MÃ©todo para verificar si el correo ya existe en la lista
bool Lista::correoExiste(const std::string& correo) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        // Generamos el correo en cada nodo y lo comparamos con el correo dado
        std::string correoNodo = generarCorreo(temp->nombre, temp->apellido);
        if (correoNodo == correo) {
            return true;
        }
        temp = temp->getSiguiente();
    }
    return false;
}

// MÃ©todo para generar el correo electrÃ³nico basado en el nombre y apellido
std::string Lista::generarCorreo(const std::string& nombre, const std::string& apellido) {
    // Genera el correo con la inicial del nombre + apellido
    std::string correo = nombre.substr(0, 1) + apellido;
    correo = correo + "@espe.edu.ec";
    return correo;
}