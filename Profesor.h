#pragma once
#include <iostream>
#include "Datum.h"
using namespace std;

class Profesor
{
	string _ime;
	string _prezime;
	Datum _datumRodenja;
public:
	Profesor(string ime, string prezime, Datum d);
	Profesor();
	~Profesor();
};

