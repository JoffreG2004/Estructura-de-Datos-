#include "Lista.h"
#include <iostream> 
#include "Coche.h"

using namespace std;


template <typename T>
 ListaCircularDoble<T>::ListaCircularDoble()
{

primero = nullptr;
ultimo = nullptr;

}

template <typename T>
void ListaCircularDoble<T>::insertar(T dato){

Nodo<T>* nuevoCarro = new Nodo<T>(dato);

if(primero == nullptr){

primero = nuevoCarro; 
primero->setSiguiente(primero);
primero->setAnterior(primero);
ultimo = primero;

}else{

ultimo->setSiguiente(nuevoCarro);
nuevoCarro->setAnterior(ultimo);
ultimo = nuevoCarro;
ultimo->setSiguiente(primero);
primero->setAnterior(ultimo);
}
}

template <typename T>
void ListaCircularDoble<T>::mostrar(Nodo<T> *aux)
{
if(aux == nullptr){

cout <<"La lista esta vacia"<<endl;
    return ;
}
if( aux->getSiguiente() == primero->getSiguiente){

return ;
}

else{

cout<< aux->getDato() <<"<->" <<endl;

 mostrar(aux->getSiguiente());

}

}
