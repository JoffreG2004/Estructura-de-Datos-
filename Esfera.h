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

    void setRadio(float radio);  // M�todo para establecer el radio
    float getRadio();  // M�todo para obtener el radio

    float calcularVolumen();  // M�todo para calcular el volumen
    float calcularAreaSuperficial();  // M�todo para calcular el �rea superficial

private:
    float radio;  // Atributo de radio
    const float PI = 3.14159;  // Constante PI para los c�lculos
};

#endif
