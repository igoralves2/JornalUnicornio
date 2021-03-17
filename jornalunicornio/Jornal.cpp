#include "Jornal.h"

Jornal::Jornal() {

}

Jornal::Jornal(string novotitulo, string novadataedicao, string novotitulonoticia, string novotextonoticia)
{
	titulo = novotitulo;
	dataedicao = novadataedicao;
	titulonoticia = novotitulonoticia;
	textonoticia = novotextonoticia;
}

Jornal::~Jornal()
{
}

string Jornal::getTitulo()
{
	return titulo;
}

string Jornal::getDataEdicao()
{
	return dataedicao;
}

string Jornal::getTituloNoticia()
{
	return titulonoticia;
}

string Jornal::getTextoNoticia()
{
	return textonoticia;
}
