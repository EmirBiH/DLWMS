#pragma once
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

	Datum();
	~Datum();
};

