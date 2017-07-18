#include "NastavniPlan.h"


NastavniPlan::NastavniPlan(string godina, vector<Predmet> pred)
{
	_godina = godina;
	_predmeti = pred;
}

NastavniPlan::NastavniPlan()
{
	_godina = "0/0";
}

NastavniPlan::~NastavniPlan()
{
}
