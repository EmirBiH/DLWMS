#include "Profesor.h"



Profesor::Profesor(string ime, string prezime, Datum d)
{
	_ime = ime;
	_prezime = prezime;
	_datumRodenja = d;
}

Profesor::Profesor()
{
	_ime = "N/A";
	_prezime = "N/A";
}

Profesor::~Profesor()
{
}
