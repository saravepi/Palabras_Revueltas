#ifndef CATALOGO_H
#define CATALOGO_H
#include <string>
#include <Palabra.h>
#include <vector>
class Palabra;
class Catalogo {
private:
std::vector<Palabra> coleccionPalabras;
std::string temaAsignado;
int totalPalabras;
public:
Catalogo(std::string tema, std::vector<Palabra> palabras);
std::string getTemaAsignado();
void setTemaAsignado(std::string tema);
int getTotalPalabras();
bool agregarPalabra(Palabra palabra_);
Palabra obtenerSiguientePalabra();
};
#endif
