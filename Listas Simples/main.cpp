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
#include "Validaciones.h"

using namespace std;

int main() {
    Validaciones<string> validaciones;
    
    string primerNombre, segundoNombre, primerApellido, segundoApellido;
    
    int opcion;
    do {
        system("cls");
        cout << "********** MENU PRINCIPAL **********\n";
        cout << "1. Ingresar datos\n";
        cout << "2. Mostrar datos\n";
        cout << "3. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;
        cin.ignore();  // Limpiar el buffer de entrada
        
        switch (opcion) {
            case 1: {
                system("cls");
                cout << "********** INGRESO DE DATOS **********\n";
                
                // Ingresar el primer nombre
                primerNombre = validaciones.ingresar("Ingrese el primer nombre: ", "string");
                
                // Ingresar el segundo nombre
                segundoNombre = validaciones.ingresar("Ingrese el segundo nombre: ", "string");
                
                // Validar que los nombres no contengan palabras prohibidas
                while (validaciones.esPalabraProhibida(primerNombre) || validaciones.esPalabraProhibida(segundoNombre)) {
                    cout << "El nombre contiene una palabra prohibida. Por favor ingrese otro nombre.\n";
                    primerNombre = validaciones.ingresar("Ingrese el primer nombre: ", "string");
                    segundoNombre = validaciones.ingresar("Ingrese el segundo nombre: ", "string");
                }
                
                // Ingresar el primer apellido
                primerApellido = validaciones.ingresar("Ingrese el primer apellido: ", "string");
                
                // Ingresar el segundo apellido
                segundoApellido = validaciones.ingresar("Ingrese el segundo apellido: ", "string");
                
                // Validar que los apellidos no contengan palabras prohibidas
                while (validaciones.esPalabraProhibida(primerApellido) || validaciones.esPalabraProhibida(segundoApellido)) {
                    cout << "El apellido contiene una palabra prohibida. Por favor ingrese otro apellido.\n";
                    primerApellido = validaciones.ingresar("Ingrese el primer apellido: ", "string");
                    segundoApellido = validaciones.ingresar("Ingrese el segundo apellido: ", "string");
                }
                
                cout << "\nDatos ingresados correctamente.\n";
                cout << "Primer nombre: " << primerNombre << "\n";
                cout << "Segundo nombre: " << segundoNombre << "\n";
                cout << "Primer apellido: " << primerApellido << "\n";
                cout << "Segundo apellido: " << segundoApellido << "\n";
                
                system("pause");
                break;
            }
            
            case 2: {
                system("cls");
                cout << "********** MOSTRAR DATOS **********\n";
                // Aquí iría el código para mostrar los datos almacenados, si los estuvieras guardando en una lista o algo similar.
                
                system("pause");
                break;
            }
            
            case 3:
                cout << "Saliendo del programa...\n";
                break;
                
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
                system("pause");
        }
    } while (opcion != 3);

    return 0;
}
