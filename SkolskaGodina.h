#pragma once
#include<iostream>
#include<vector>
#include"Student.h"
#include"NastavniPlan.h"
#include"StudentRedovan.h"
#include"StudemtDL.h"

using namespace std;

class SkolskaGodina
{
	string _skolskaGodina;//npr.2017/2018
	vector<Student*> _studenti;
	NastavniPlan _program;
public:
	//set
	bool DodajStudenta(Student *S);
	void DodajStudente(vector<Student*> s);
	void DodajNPP(NastavniPlan npp);
	void setSKGodina(string g);
	//get
	Student *NajboljiStudent();
	int getBrojStudenata();
	friend ostream&operator<<(ostream&cout, const SkolskaGodina &sk);
	SkolskaGodina(string g = "N/A");
	~SkolskaGodina();
};

