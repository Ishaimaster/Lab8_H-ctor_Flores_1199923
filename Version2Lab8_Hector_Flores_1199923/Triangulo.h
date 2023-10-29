#pragma once
#include "Poligono.h"

ref class Triangulo : public Poligono
{
	private:

		double base;
		double altura;
		double lado;
		
	public:

		Triangulo(double b, double h, double l) : base(b), altura(h), lado(l) {}

	virtual double GetArea() override
	{
	
		return (altura * base) / 2;
	}

	virtual double GetPerimetro() override
	{
	
		return lado * 2 + base;

	}


};

