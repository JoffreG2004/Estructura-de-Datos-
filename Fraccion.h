/***********************************************************************
 * Module:  Fraccion.h
 * Author:  mario
 * Modified: viernes, 1 de noviembre de 2024 18:03:23
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__Fraccion_Fraccion_h)
#define __Fraccion_Fraccion_h

class Fraccion
{
public:
   void setNumerador(float num);
   void setDenominador(float denm);
   float getNumerador(void);
   float getDenominador(void);

   Fraccion(float num = 0, float denm = 1);
   ~Fraccion();

   Fraccion sumar(Fraccion other);
   static Fraccion sumarFracciones(Fraccion fracciones[], int cantidad);

private:
   float num;
   float denm;

   void validarDenominador(float denm);
   void simplificar();
   int mcd(int a, int b);
};

#endif