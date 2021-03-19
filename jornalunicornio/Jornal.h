#pragma once
#include "libUnicornio.h"
#include <string>
#include "Noticia.h"
#include "Pagina.h"
class Jornal
{
public:
	Jornal();
	Jornal(string novotitulo, string novadataedicao, int novonroColunas);
	~Jornal();
	string getTitulo();
	string getDataEdicao();
	Noticia getNoticia(int index);
	Pagina getPagina(int index);
	void setTitulo(string novo);
	void setDataEdicao(string nova);
	void adicionarImagemNoticia(int index, string textura);
	void adicionarMaisColunasNoticia(int nro);
	void adicionarNoticia(Noticia nova);
	void adicionarPagina(Pagina p);
	int getNroColunas();
	int getPaginaAtual();
	void alternapagina(bool avanca);
	int maxpaginas = 10;
	int maxnoticias = 10;
protected:
	string titulo;
	string dataedicao;
	Noticia noticias[10];
	Pagina paginas[10];
	int index;
	int nroColunas;
	int nroNoticias;
	int nroPaginas;
	int paginaatual;
};

