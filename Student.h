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
	virtual ~Student();
	double Prosjek();
private:
	string _ime;
	string _prezime;
	string _brojIndexa;
	Datum _datumRodenja;
	vector<PolozeniPredmet> _polozeniPredmeti;
};