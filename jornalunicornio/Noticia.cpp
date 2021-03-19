#include "Noticia.h"

Noticia::Noticia()
{
}

Noticia::Noticia(string novonome, string novotexto)
{
	titulonoticia = novonome;
	textonoticia = novotexto;
	nroTexturas = 0;
}

Noticia::~Noticia()
{
}

string Noticia::getTitulo()
{
	return titulonoticia;
}

string Noticia::getTexto()
{
	return textonoticia;
}

void Noticia::adicionarTextura(string textura)
{	
	if (nroTexturas >= maxtexturas) {
		return;
	}
	texturas[nroTexturas] = textura;
	nroTexturas++;
}
