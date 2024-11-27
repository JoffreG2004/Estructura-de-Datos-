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
#include <string>
#include "lista.h"  // Incluye la clase Lista

int main() {
    Lista lista;
    int opcion;

    do {
        // MenÃº
        std::cout << "\nMenÃº de Opciones:\n";
        std::cout << "1. Crear usuario y correo\n";
        std::cout << "2. Mostrar lista de usuarios\n";
        std::cout << "3. Salir\n";
        std::cout << "Ingrese una opciÃ³n: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                
                std::string nombre, apellido, correo, correoFinal;
                int contador = 1;

               
                std::cout << "Ingrese el nombre: ";
                std::cin >> nombre;
                std::cout << "Ingrese el apellido: ";
                std::cin >> apellido;

                // Generar correo base
                correo = lista.generarCorreo(nombre, apellido);

                // Verificar si el correo ya existe
                correoFinal = correo;
                while (lista.correoExiste(correoFinal)) {
                    correoFinal = correo.substr(0, correo.find("@")) + std::to_string(contador) + "@espe.edu.ec";
                    contador++;
                }

                // Crear nuevo nodo con el correo generado
                lista.crear(nombre, apellido);

                // Mostrar el correo generado
                std::cout << "Correo generado: " << correoFinal << std::endl;
                break;
            }
            case 2:
                lista.mostrar();  // Muestra la lista de usuarios con correos generados
                break;

            case 3:
                std::cout << "Saliendo...\n";
                break;

            default:
                std::cout << "OpciÃ³n no vÃ¡lida.\n";
        }
    } while (opcion != 3);

    return 0;
}