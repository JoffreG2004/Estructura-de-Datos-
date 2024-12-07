#pragma once
#include "Nodo.h"

template <typename T>
class ListaCircularDoble {
private:
    Nodo<T>* primero;   
    Nodo<T>* ultimo;    

public:
    ListaCircularDoble();     
    void insertar(T dato);    
    void buscarPorPlaca(T dato);
    void buscarPorHistorial(T dato);     
    void eliminar(T dato);    
    void mostrar(Nodo<T> *aux);           
};


