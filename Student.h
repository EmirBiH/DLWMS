#pragma once
#include<iostream>
#include<vector>
#include "Datum.h"
#include"PolozeniPredmet.h"
using namespace std;

class Student
{
public:
	Student();
	Student(string ime, string prezime, string brindexa, Datum datumrodenja);
	virtual ~Student();
	virtual double Prosjek() = 0;
	friend ostream & operator<<(ostream &cout, const Student &s);
	virtual void info() = 0;
protected:
	string _ime;
	string _prezime;
	string _brojIndexa;
	Datum _datumRodenja;
	vector<PolozeniPredmet> _polozeniPredmeti;
};