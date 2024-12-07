#include <iostream>
#include "coche.cpp"
#include "Lista.cpp"
#include "Coche.h"

int main (){

 Coche nuevoCoche = InsertarDatos();

  ListaCircularDoble<Coche> lista;

 Coche coche =InsertarDatos();

     lista.insertar(coche);

    return 0;
}
