#pragma once
#include "plansza.h"
class gra
{
private:
	plansza p;
	int tura;
public:
	gra();
	void ruch(int a, char b);
	void obrot(int a);

};

