#include "Pagina.h"

Pagina::Pagina()
{
}

Pagina::Pagina(int novonro)
{
    nro = novonro;
}

Pagina::~Pagina()
{
}

int Pagina::getNumero()
{
    return nro;
}

string Pagina::getTexto()
{
    return texto;
}

void Pagina::setTexto(string novo)
{
    texto = novo;
}
