/***********************************************************************
 * Module:  Esfera.h
 * Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:45:00
 * Purpose: Declaration of the class Esfera
 ***********************************************************************/

#if !defined(__Esfera_Esfera_h)
#define __Esfera_Esfera_h

class Esfera {
public:
    Esfera(float radio);  // Constructor para inicializar la esfera con el radio

    void setRadio(float radio);  // Método para establecer el radio
    float getRadio();  // Método para obtener el radio

    float calcularVolumen();  // Método para calcular el volumen
    float calcularAreaSuperficial();  // Método para calcular el área superficial

private:
    float radio;  // Atributo de radio
    const float PI = 3.14159;  // Constante PI para los cálculos
};

#endif
