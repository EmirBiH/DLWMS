#include "StudemtDL.h"
#include<string>


StudemtDL::StudemtDL()
{
}

StudemtDL::StudemtDL(string ime, string prezime, string brindexa, Datum rodenja) :Student(ime, prezime, brindexa, rodenja)
{
}


StudemtDL::~StudemtDL()
{
}

double StudemtDL::Prosjek()
{
	return 0.0;
}

void StudemtDL::info()
{
	cout << _status << " " << _ime << " " << _prezime << " " << _brojIndexa;
}

ostream & operator<<(ostream & cout, const StudemtDL & s)
{
	cout << s._status << " " << s._ime << " " << s._prezime << " " << s._brojIndexa;
	return cout;
}
