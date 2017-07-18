#include "Student.h"
#include<string>
Student::Student()
{
}
Student::Student(string ime, string prezime, string brindexa, Datum datumrodenja)
{
	_ime = ime;
	_prezime = prezime;
	_brojIndexa = brindexa;
	_datumRodenja = datumrodenja;
}
Student::~Student()
{
}
ostream & operator<<(ostream & cout, const Student & s)
{
	cout << s._ime << " " << s._prezime << "  " << s._brojIndexa << endl;
	return cout;
}
double Student::Prosjek()
{
	return 0.0;
}
