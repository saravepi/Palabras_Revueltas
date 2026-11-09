#include "Tablero.h"
#include <iostream>
using namespace std;
// Constructor
Tablero::Tablero() {
palabraObjetivo = "";
}
// Configurar el tablero con una palabra
void Tablero::configurar(const string& palabra) {
palabraObjetivo = palabra;
// Eliminar las celdas anteriores
celdas.clear();
// Crear una celda por cada letra
for (int i = 0; i < palabraObjetivo.length(); i++) {
char letraVacia = '\0';
char letraCorrecta = palabraObjetivo[i];
Celda nuevaCelda(&letraVacia, &letraCorrecta);
celdas.push_back(nuevaCelda);
}
}
// Colocar una letra en una posición
bool Tablero::colocarLetra(int posicion, char letra) {
if (posicion < 0 || posicion >= celdas.size()) {
return false;
}
celdas[posicion].guardarCaracter(&letra);
return celdas[posicion].validarLetra();
}
// Mostrar el contenido del tablero
void Tablero::mostrarPalabra() {
cout << "\nPalabra: ";
for (int i = 0; i < celdas.size(); i++) {
char letra = *celdas[i].getLetraIngresada();
if (letra == '\0') {
cout << "_ ";
}
else {
cout << letra << " ";
}
}
cout << endl;
}
// Comprobar si la palabra es correcta
bool Tablero::palabraCorrecta() {
for (int i = 0; i < celdas.size(); i++) {
if (!celdas[i].validarLetra()) {
return false;
}
}
return true;
}
// Comprobar si todas las celdas están ocupadas
bool Tablero::estaCompleto() {
for (int i = 0; i < celdas.size(); i++) {
if (*celdas[i].getLetraIngresada() == '\0') {
return false;
}
}
return true;
}
// Reiniciar todas las celdas
void Tablero::reiniciarTablero() {
for (int i = 0; i < celdas.size(); i++) {
celdas[i].reiniciarCelda();
}
}
// Obtener el número de celdas
int Tablero::getNumeroCeldas() {
return celdas.size();
}
