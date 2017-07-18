#include "Datum.h"



Datum::Datum(int d, int m, int g)
{
	_dan = d;
	_mjesec = m;
	_godina = g;
}

Datum::Datum()
{
	_dan = 1;
	_mjesec = 1;
	_godina = 2000;
}

Datum::~Datum()
{
}

int Datum::getDan()
{
	return _dan;
}

int Datum::getMjesec()
{
	return _mjesec;
}

int Datum::getGodina()
{
	return _godina;
}

int Datum::getIntOf()
{
	int suma = 0;
	suma = (_godina * 10000) + (_mjesec * 100) + _dan;
	return suma;
}

std::ostream & operator<<(std::ostream & cout, const Datum & d)
{
	cout << d._dan << ":" << d._mjesec << ":" << d._godina;
	return cout;
}
