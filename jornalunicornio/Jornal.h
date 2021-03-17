#pragma once
#include "libUnicornio.h"
#include <string>
class Jornal
{
public:
	Jornal();
	Jornal(string novotitulo, string novadataedicao, string novotitulonoticia, string novotextonoticia);
	~Jornal();
	string getTitulo();
	string getDataEdicao();
	string getTituloNoticia();
	string getTextoNoticia();
protected:
	string titulo;
	string dataedicao;
	string titulonoticia;
	string textonoticia;
};

