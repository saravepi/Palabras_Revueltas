#include "Celda.h"

Celda::Celda()
{
    letraingresada = '\0';
    letraacertada = '\0';
}

Celda::Celda(char* li, char* la)
{
    if (li != nullptr) {
        letraingresada = *li;
    } else {
        letraingresada = '\0';
    }

    if (la != nullptr) {
        letraacertada = *la;
    } else {
        letraacertada = '\0';
    }
}

Celda::~Celda()
{
}

char* Celda::getLetraingresada()
{
    return &letraingresada;
}

char* Celda::getLetraAcertada()
{
    return &letraacertada;
}

void Celda::guardarCaracter(char* caracter)
{
    if (caracter != nullptr) {
        letraingresada = *caracter;
    }
}

bool Celda::validarLetra()
{
    return (letraingresada == letraacertada);
}

void Celda::reiniciarCelda()
{
    letraingresada = '\0';
}
