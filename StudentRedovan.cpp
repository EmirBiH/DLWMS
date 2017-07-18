#include "StudentRedovan.h"
#include<string>
#include<iomanip>

StudentRedovan::StudentRedovan()
{
}

StudentRedovan::StudentRedovan(string ime, string prezime, string brindexa, Datum datumrodenja) :Student(ime, prezime, brindexa, datumrodenja)
{
}


StudentRedovan::~StudentRedovan()
{
}

double StudentRedovan::Prosjek()
{
	return 0.0;
}

void StudentRedovan::info()
{
	cout << _status << " " << _ime << " " << _prezime << "  " << _brojIndexa;
}

ostream & operator<<(ostream & cout, const StudentRedovan & s)
{
	cout << s._status << " " << s._ime << " " << s._prezime << "  " << s._brojIndexa;
	return cout;
}
