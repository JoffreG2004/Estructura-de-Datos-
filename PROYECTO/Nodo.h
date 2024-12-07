#pragma once
#include <iostream>

template <typename T>
class Nodo {
private:
    T dato;              
    Nodo* siguiente;      
    Nodo* anterior;       

public:

    Nodo(T dato);  

       T getDato() {
        return dato;
       }
    void setDato(T dato);
   
    void setSiguiente(Nodo* siguiente);

    Nodo* getSiguiente();

    
    void setAnterior(Nodo* anterior);

    Nodo* getAnterior();

       
};
