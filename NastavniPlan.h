#pragma once
#include<iostream>
#include<vector>
#include"Predmet.h"
using namespace std;


class NastavniPlan
{
	string _godina;
	vector<Predmet> _predmeti;

public:
	//set
	NastavniPlan(string godina, vector<Predmet> pred);
	NastavniPlan();
	~NastavniPlan();
	//get
	string getGodina() const { return _godina; }
};

