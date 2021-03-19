#pragma once
#include <string>

using namespace std;

class Pagina
{
public:
	Pagina();
	Pagina(int novonro);
	~Pagina();
	int getNumero();
	string getTexto();
	void setTexto(string novo);
protected:
	int nro;
	string texto;
};

