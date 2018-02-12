#include "Tile.h"



void Tile::Mostrar(Graphics ^ G)
{
	array<Point>^ puntos = gcnew array<Point>(lado);
	float x1, y1;
	for (int i = 0; i < lado; i++)
	{
		float ang = 45 + (360 / lado)*i;
		x1 = x + l *System::Math::Cos(ang *System::Math::PI / 180);
		y1 = y + l *System::Math::Sin(ang *System::Math::PI / 180);
		puntos[i] = Point(x1, y1);
	}
	SolidBrush ^ B = gcnew SolidBrush(Color::PaleVioletRed);
	G->FillPolygon(B, puntos);
}

Tile::Tile()
{
}

Tile::Tile(float px, float py, float pl)
{
	lado = 4;
	Tag = 4;
	x = px;
	y = py;
	l = pl;
}


Tile::~Tile()
{
}
