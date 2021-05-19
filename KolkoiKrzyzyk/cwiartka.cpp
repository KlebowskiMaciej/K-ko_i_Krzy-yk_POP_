#include "cwiartka.h"
#include <iostream>
using namespace std;

cwiartka::cwiartka()
{
	arr = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		arr[i] = new int[3];
		for (int j = 0; j < 3; j++)
			arr[i][j] = -1;
	}
}

void cwiartka::obrot()
{
	;

}

void cwiartka::drukujWiersz(int j)
{
	for (int i = 0; i < 3; i++)
	{
		cout << '|';
		switch (arr[j][i])
		{
		case -1:
			cout << ' ';
			break;
		case 1:
			cout << 'X';
			break;
		case 0:
			cout << 'O';
			break;
		}
		cout << '|';
	}
}

void cwiartka::wpisz(int a, int b, int gracz)
{
	arr[a][b] = gracz;
}
