#pragma once
#include "Figura.h"
class Espina :
	public Figura
{
	int i = 0;
public:
	void Mostrar(Graphics^ G, Bitmap^ img);
	Espina();
	Espina(float px, float py, float pl);
	~Espina();
};

