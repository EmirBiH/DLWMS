#pragma once
#include<iostream>
class Datum
{
	int _dan;
	int _mjesec;
	int _godina;
public:
	//get
	int getDan();
	int getMjesec();
	int getGodina();
	int getIntOf();

	Datum(int d, int m, int g);
	Datum();
	friend std::ostream &operator<<(std::ostream&cout, const Datum &d);
	~Datum();
};

