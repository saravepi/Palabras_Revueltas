#ifndef TABLERO_H
#define TABLERO_H
#include <string>
#include <vector>
#include "Celda.h"
class Tablero {
private:
std::vector<Celda> celdas;
std::string palabraObjetivo;
public:
// Constructor
Tablero();
// Configurar el tablero con una palabra
void configurar(const std::string& palabra);
// Colocar una letra en una posición
bool colocarLetra(int posicion, char letra);
// Mostrar el contenido del tablero
void mostrarPalabra();
// Comprobar si todas las letras son correctas
bool palabraCorrecta();
// Comprobar si todas las celdas están ocupadas
bool estaCompleto();
// Reiniciar todas las celdas
void reiniciarTablero();
// Obtener el número de celdas
int getNumeroCeldas();
};
#endif
