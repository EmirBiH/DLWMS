#pragma once
#include<iostream>
#include<vector>
#include"Student.h";
#include"Predmet.h"

using namespace std;

class SkolskaGodina
{
	string _skolskaGodina;//npr.2017/2018
	vector<Student*> _studenti;
	vector<Predmet> _predmeti;
public:
	//set
	bool DodajStudenta(Student S);
	bool DodajPredmet(Predmet p);
	void setSKGodina(string g);
	Student NajboljiStudent();
	SkolskaGodina(string g = "N/A");
	~SkolskaGodina();
};

