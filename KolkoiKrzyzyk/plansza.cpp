#include "plansza.h"
#include <iostream>
using namespace std;

plansza::plansza()
{
	c = new cwiartka*[2];
	c[0] = new cwiartka[2];
	c[1] = new cwiartka[2];
}

void plansza::drukuj()
{
	system("CLS");
	cout << "    cw. 4    cw. 1" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << i*3+j+1 << ' ';
			c[i][0].drukujWiersz(j);
			c[i][1].drukujWiersz(j);
			cout << endl;
		}
		if (i == 0)
		{
			cout << "  ";
			for (int i = 0; i < 18; i++)
				cout << '-';
			cout << "  ";
			cout << endl;
		}
	}
	cout << "   A  B  C  D  E  F" << endl;
	cout << "    cw. 3    cw. 2" << endl;
}

void plansza::dodaj(int a, char b, int gracz)
{
	c[a / 4][(b - 'A') / 4].wpisz(a % 4, (b - 'A') % 4, gracz);
}

void plansza::obroc(int a)
{
	if (a == 1)
		c[0][1].obrot();
	else if (a == 2)
		c[1][1].obrot();
	else if (a == 3)
		c[1][0].obrot();
	else
		c[0][0].obrot();
}

bool plansza::koniec()
{
	return false;
}
