/***************************************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                                  *
 * Proposito:                      Programa sobre lista simple                         *
 * Autor:                          Joffre Gomez     *
 * Fecha de creacion:              18/11/2024                                          *
 * Fecha de modificacion:          18/11/2024                                          *
 * Materia:                        Estructura de datos                                 *
 * NRC :                           1978                                                *
 **************************************************************************************/
// Nodo.h
template <typename T>
class Nodo {
public:
    Nodo(T _dato);
    T getDato();
    Nodo<T>* getSiguiente();
    void setSiguiente(Nodo<T>* _siguiente);
private:
    T dato;
    Nodo<T>* siguiente;
};

template <typename T>
Nodo<T>::Nodo(T _dato) {
    dato = _dato;
    siguiente = NULL;
}

template <typename T>
T Nodo<T>::getDato() {
    return dato;
}

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
    return siguiente;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T>* _siguiente) {
    siguiente = _siguiente;
}
