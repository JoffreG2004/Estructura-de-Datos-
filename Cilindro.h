/***********************************************************************
 * Module:  Cilindro.h
 * Author:  mario
 * Modified: martes, 5 de noviembre de 2024 17:51:28
 * Purpose: Declaration of the class Cilindro
 ***********************************************************************/

#if !defined(__Cilindro_Cilindro_h)
#define __Cilindro_Cilindro_h

class Cilindro {
public:
    Cilindro(float radio, float altura);

    void setRadio(float radio);
    void setAltura(float altura);

    float getRadio();
    float getAltura();

    float calcularVolumen();
    float calcularAreaSuperficial();

private:
    float radio;
    float altura;
    const float PI = 3.14159;
};

#endif