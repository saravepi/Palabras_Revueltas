#include "Catalogo.h"

Catalogo::Catalogo(std::string tema, std::vector<Palabra> palabras) {
    temaAsignado = tema;
    coleccionPalabras = palabras;
    totalPalabras = palabras.size();
}

std::string Catalogo::getTemaAsignado() {
    return temaAsignado;
}

void Catalogo::setTemaAsignado(std::string tema) {
    temaAsignado = tema;
}

int Catalogo::getTotalPalabras() {
return totalPalabras;
}
bool Catalogo::agregarPalabra(Palabra palabra_) {
coleccionPalabras.push_back(palabra_);
totalPalabras = coleccionPalabras.size();
return true;
}
Palabra Catalogo::obtenerSiguientePalabra() {
if (!coleccionPalabras.empty()) {
return coleccionPalabras[0];
}
return Palabra();
}
