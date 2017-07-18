#pragma once
#include<iostream>
#include"Profesor.h"
using namespace std;
class Predmet
{
	int _brojETCS;
	string _naziv;
	Profesor _profesor;
public:
	Predmet();
	Predmet(int etcs, string n, Profesor prof);
	~Predmet();
};

