#pragma once
#include <iostream>
#include"Predmet.h"
#include<vector>
using namespace std;
class GodinaStudija
{
	int _godina;
	vector<Predmet>_predmeti;
public:
	//set
	void setGodina(int godina);
	void dodajPredmet(Predmet P);
	//get 
	int getGodinaStudija();
	vector<Predmet> getPredmete();
	GodinaStudija();
	~GodinaStudija();
};

