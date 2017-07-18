#pragma once
#include "Student.h"

class StudentRedovan :
	public Student
{
	string _status = "REDOVAN";
public:
	StudentRedovan();
	StudentRedovan(string ime, string prezime, string brindexa, Datum datumrodenja);
	~StudentRedovan();
	double Prosjek();
	void info();
	friend ostream& operator<<(ostream&cout, const StudentRedovan &s);
};

