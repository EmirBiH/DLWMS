#include "PolozeniPredmet.h"



int PolozeniPredmet::getOcjena()
{
	return _ocjena;
}

void PolozeniPredmet::setOcjena(int ocjena)
{
	if (ocjena < 5 || ocjena>10)
		throw("Ocjena je pogresno unesena.");
	_ocjena = ocjena;
}

PolozeniPredmet::PolozeniPredmet()
{
}


PolozeniPredmet::~PolozeniPredmet()
{
}
