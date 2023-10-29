#pragma once
#include "Rectangulo.h"
#include "Poligono.h"

ref class Cuadrado : public Rectangulo
{
   private:

	   double lado;

	public:

		Cuadrado(double p) : Rectangulo(p,p), lado(p) {}

		virtual double GetArea() override
		{
		
			return lado * lado;
		
		}

		virtual double GetPerimetro() override
		{
		
			return (4 * lado);
		}
};