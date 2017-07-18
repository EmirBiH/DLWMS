#include "Predmet.h"



Predmet::Predmet(int etcs, string n, Profesor prof)
{
	_brojETCS = etcs;
	_naziv = n;
	_profesor = prof;
}
Predmet::Predmet()
{
	_naziv = "N/A";
	_brojETCS = 0;
}
Predmet::~Predmet()
{
}
