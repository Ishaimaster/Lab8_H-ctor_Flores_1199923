#pragma once
#include "Poligono.h"

ref class Rectangulo : public Poligono
{
	private:

		double largo;
		double ancho;

	public:

		Rectangulo(double (k), double(j)): largo(k), ancho(j){}

		virtual double GetArea() override
		{
		
			return largo * ancho;
			
		}

		virtual double GetPerimetro() override
		{
		
			return 2 * (largo + ancho);
		
		}

};