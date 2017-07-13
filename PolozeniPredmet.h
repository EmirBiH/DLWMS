#pragma once
#include "Predmet.h"
class PolozeniPredmet :
	public Predmet
{
	int _ocjena;
public:
	//get
	int getOcjena();
	//set
	void setOcjena(int ocjena);
	PolozeniPredmet();
	~PolozeniPredmet();
};

