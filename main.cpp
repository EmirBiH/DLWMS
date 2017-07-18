#include <iostream>
#include "SkolskaGodina.h"
#include"StudentRedovan.h"
#include"StudemtDL.h"
#include<fstream>
#include<sstream>
#include<iterator>
#include<algorithm>

using namespace std;

void main() {
	vector<Predmet> predmeti;

	Profesor denis("Denis", "Music", Datum(21, 4, 1986));
	Profesor jasmin("Jasmin", "Azemovic", Datum(5, 6, 1985));
	Profesor nina("Nina", "Bijedic", Datum(4, 8, 1970));
	Profesor zanin("Zanin", "Vejzivic", Datum(5, 3, 1983));
	Profesor armina("Armina", "Hubana", Datum(6, 7, 1969));
	Profesor edina("Edina", "Spago-Cumurija", Datum(4, 6, 1986));

	Predmet informaciske_tehnologije(7, "Informacijske tehnologije", jasmin);
	Predmet programiranje_1(7, "Programiranje I", denis);
	Predmet inzinjerska_matematika(7, "Inžinjerska matematika", nina);
	Predmet arhitektura_racunara(7, "Arhitektura raèunara", zanin);
	Predmet digitalna_ekonomija(2, "Digitalna ekonomija", armina);

	Predmet diskretna_matematika(7, "Diskretna matematika", nina);
	Predmet programiranje_2(7, "Programiranje II", denis);
	Predmet operativni_sistemi(7, "Operativni sistemi", zanin);
	Predmet racunarske_mreze(6, "Raèunarske mreže", zanin);
	Predmet engleski_jezik_1(3, "Engleski jezik I", edina);

	predmeti.push_back(informaciske_tehnologije);
	predmeti.push_back(programiranje_1);
	predmeti.push_back(inzinjerska_matematika);
	predmeti.push_back(arhitektura_racunara);
	predmeti.push_back(digitalna_ekonomija);

	predmeti.push_back(diskretna_matematika);
	predmeti.push_back(programiranje_2);
	predmeti.push_back(operativni_sistemi);
	predmeti.push_back(racunarske_mreze);
	predmeti.push_back(engleski_jezik_1);

	NastavniPlan Plan2014("2014", predmeti);
	SkolskaGodina Skolska2017;
	Skolska2017.DodajNPP(Plan2014);
	Skolska2017.setSKGodina("2017/2018");

	vector<Student*> studenti;
	ifstream obj;
	obj.open("Studenti.txt");
	string line;
	while (getline(obj, line))
	{
		istringstream iss(line);
		string a, b, c;
		if (!(iss >> a >> b >> c)) { break; } // error
		studenti.push_back(new StudentRedovan(b, c, a, Datum(1, 1, 2000)));

	}
	for (int i = 0; i < studenti.size(); i++) {
		StudentRedovan* pok = dynamic_cast<StudentRedovan*>(studenti[i]);
		if (pok != nullptr)
			cout << *pok << endl;
	}
	obj.close();
	obj.open("DLStudenti.txt");
	vector<Student*> DLS;
	while (getline(obj, line))
	{
		istringstream iss(line);
		string a, b, c;
		if (!(iss >> a >> b >> c)) { break; } // error
		DLS.push_back(new StudemtDL(b, c, a, Datum(1, 1, 2000)));
	}
	obj.close();
	Skolska2017.DodajStudente(studenti);
	Skolska2017.DodajStudente(DLS);
	cout << Skolska2017 << endl;
	system("pause>0");
}