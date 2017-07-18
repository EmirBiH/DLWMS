#include "SkolskaGodina.h"
#include<string>

bool SkolskaGodina::DodajStudenta(Student *S)
{
	StudemtDL *pok = dynamic_cast<StudemtDL*>(S);
	if (pok != nullptr)
	{
		_studenti.push_back(new StudemtDL(*pok));
		pok = nullptr;
	}
	else {
		StudentRedovan *nesto = dynamic_cast<StudentRedovan*>(S);
		if (nesto != nullptr) {
			_studenti.push_back(new StudentRedovan(*nesto));
		}
		else
			return false;
		nesto = nullptr;
	}
	return true;
}

void SkolskaGodina::DodajStudente(vector<Student*> s)
{
	for (int i = 0; i < s.size(); i++)
	{
		StudentRedovan *pok = dynamic_cast<StudentRedovan*>(s[i]);
		if (pok != nullptr)
			_studenti.push_back(new StudentRedovan(*pok));
		else {
			StudemtDL *nesto = dynamic_cast<StudemtDL*>(s[i]);
			_studenti.push_back(new StudemtDL(*nesto));
		}
	}
}

void SkolskaGodina::DodajNPP(NastavniPlan npp)
{
	_program = npp;
}

void SkolskaGodina::setSKGodina(string g)
{
	_skolskaGodina = g;
}

Student* SkolskaGodina::NajboljiStudent()
{
	return nullptr;
}

int SkolskaGodina::getBrojStudenata()
{
	return _studenti.size();
}

SkolskaGodina::SkolskaGodina(string g)
{
	_skolskaGodina = g;
}


SkolskaGodina::~SkolskaGodina()
{
}

ostream & operator<<(ostream & cout, const SkolskaGodina & sk)
{
	cout << "Skolska: " << sk._skolskaGodina << endl;
	cout << "Nastavni plan i program: " << sk._program.getGodina() << endl;
	cout << "Studenti:" << endl;
	for (int i = 0; i < sk._studenti.size(); i++)
	{
		(*sk._studenti[i]).info();
		cout << endl;
	}
	return cout;
}