#include "Jornal.h"

Jornal::Jornal() {

}

Jornal::Jornal(string novotitulo, string novadataedicao, int novonroColunas)
{
	titulo = novotitulo;
	dataedicao = novadataedicao;
	nroNoticias = 0;
	nroPaginas = 0;
	nroPaginas = 0;
	nroColunas = novonroColunas;
	paginaatual = 0;
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

Noticia Jornal::getNoticia(int index)
{
	if (nroNoticias == 0) {
		return Noticia("Erro", "Isto não é uma notícia");
	}if (index < 0 || index >= nroNoticias) {
		return Noticia("Erro", "Isto não é uma notícia");
	}return noticias[index];
}

Pagina Jornal::getPagina(int index)
{
	if (nroPaginas == 0) {
		return Pagina(0);
	}if (index < 0 || index >= nroPaginas) {
		return Pagina(0);
	}return paginas[index];
}


void Jornal::setTitulo(string novo) {
	titulo = novo;
}

void Jornal::setDataEdicao(string nova)
{
	dataedicao = nova;
}

void Jornal::adicionarImagemNoticia(int index, string novatextura)
{
	getNoticia(index).adicionarTextura(novatextura);
}
		
void Jornal::adicionarMaisColunasNoticia(int nro)
{
	nroColunas += nro;
}

void Jornal::adicionarNoticia(Noticia nova)
{
	if (nroNoticias >= maxnoticias) {
		return;
	}
	noticias[nroNoticias] = nova;
	nroNoticias;
}

void Jornal::adicionarPagina(Pagina p)
{
	if (nroPaginas >= maxpaginas) {
		return;
	}
	paginas[nroPaginas] = p;
	nroPaginas++;
}

int Jornal::getNroColunas()
{
	return nroColunas;
}

int Jornal::getPaginaAtual()
{
	return paginaatual;
}

void Jornal::alternapagina(bool avanca)
{
	if (nroPaginas > 0) {
		if (avanca) {
			paginaatual = (paginaatual + 1) % nroPaginas;
		}
		else {
			paginaatual = (paginaatual - 1) % nroPaginas;
		}
	}
}
