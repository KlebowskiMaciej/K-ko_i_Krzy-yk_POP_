#pragma once
#include "cwiartka.h"
class plansza
{
private:
	cwiartka** c;
public:
	plansza();
	void drukuj();
	void dodaj(int a, char b, int gracz);
	void obroc(int a);
	bool koniec();
};

