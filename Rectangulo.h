/***********************************************************************
 * Module:  Rectangulo.h
 * Author:  mario
 * Modified: jueves, 31 de octubre de 2024 23:27:06
 * Purpose: Declaration of the class Rectangulo
 ***********************************************************************/

#if !defined(__Rectangulo_Rectangulo_h)
#define __Rectangulo_Rectangulo_h

class Rectangulo {
public:
    Rectangulo(float largo, float ancho);

    void setLargo(float largo);
    void setAncho(float ancho);

    float getLargo();
    float getAncho();

    float calcularArea();
    float calcularPerimetro();

private:
    float largo;
    float ancho;
};

#endif