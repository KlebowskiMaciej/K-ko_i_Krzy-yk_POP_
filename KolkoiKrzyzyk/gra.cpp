#include "gra.h"
#include <iostream>

class cwiartka
{
private:
	int** arr;

public:
	cwiartka();
	void obrot();
	void drukujWiersz(int j);
	void wpisz(int a, int b, int gracz);
};
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
using namespace std;

gra::gra()
{
	tura = 0;
	while (tura<36)
	{
		p.drukuj();
		int a, b;
		char c;
		cout << "Podaj pozycje(np. 1 A)" << endl;
		cin >> a >> c;
		ruch(a-1, c);
		p.drukuj();
		
		cout << "Podaj ktora cwiartke obrocic(np. 4)"<<endl;
		cin >> b;
		obrot(b);
		p.drukuj();
		tura++;
		/*BOT
		a=getWorthA();
		b=getWorthB();
		c=getWorthC();
		ruch(a,c);
		obrot(b);
		tura++;
		*/
	}
}

void gra::ruch(int a, char b)
{
	p.dodaj(a, b, tura % 2);
}

void gra::obrot(int a)
{
	p.obroc(a);
}
