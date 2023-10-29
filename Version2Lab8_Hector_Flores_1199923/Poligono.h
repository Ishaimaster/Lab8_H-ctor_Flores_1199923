#pragma once

ref class Poligono abstract
{
	protected:

	static int NextID = 0;
	int ID;

	public:

		Poligono();

	property int PoligonoID
	{
		int get() { return ID; }
	}

	virtual double GetArea() abstract;
	virtual double GetPerimetro() abstract;

};



