/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
 
#include <iostream>
#include "lista.h"

int main() {
    Lista lista;
    int opcion;

    do {
        std::cout << "\nMenú de Opciones:\n";
        std::cout << "1. Crear usuario y correo\n";
        std::cout << "2. Mostrar lista de usuarios\n";
        std::cout << "3. Salir\n";
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string nombre, apellido, correo, correoFinal;
                int contador = 1;

                std::cout << "Ingrese el nombre: ";
                std::cin >> nombre;
                std::cout << "Ingrese el apellido: ";
                std::cin >> apellido;

                correo = lista.generarCorreo(nombre, apellido);
                correoFinal = correo;

                while (lista.correoExiste(correoFinal)) {
                    correoFinal = correo.substr(0, correo.find("@")) + std::to_string(contador) + "@espe.edu.ec";
                    contador++;
                }

                lista.crear(nombre, apellido);
                std::cout << "Correo generado: " << correoFinal << std::endl;
                break;
            }
            case 2:
                lista.mostrar();
                break;
            case 3:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción no válida.\n";
        }
    } while (opcion != 3);

    return 0;
}
