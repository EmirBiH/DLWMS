#pragma once
#include "Student.h"
class StudemtDL :
	public Student
{
	string _status = "DL";
public:
	StudemtDL();
	StudemtDL(string ime, string prezime, string brindexa, Datum rodenja);
	~StudemtDL();
	double Prosjek();
	void info();
	friend ostream&operator<<(ostream &cout, const StudemtDL &s);
};

