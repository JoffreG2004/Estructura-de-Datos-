/***********************************************************************
 * Module:  Cilindro.h
* Author:  Joffre Gomez
 * Modified: Sabado, 2 de noviembre de 2024 18:03:23
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
