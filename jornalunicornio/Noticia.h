#pragma once
#include <string>

using namespace std;

class Noticia
{
	public:
		Noticia();
		Noticia(string novonome, string novotexto);
		~Noticia();
		string getTitulo();
		string getTexto();
		void adicionarTextura(string textura);
		int maxtexturas = 10;
	protected:
		string titulonoticia;
		string textonoticia;
		string texturas[10];
		int nroTexturas;
};
