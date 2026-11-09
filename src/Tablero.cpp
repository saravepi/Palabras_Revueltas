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
    // Usamos static para que el caracter vacío '\0' no desaparezca de la memoria
    static char letraVacia = '\0';

    for (size_t i = 0; i < palabraObjetivo.length(); i++) {
        // Le pasamos la dirección de memoria segura del string
        Celda nuevaCelda(&letraVacia, &palabraObjetivo[i]);
        celdas.push_back(nuevaCelda);
    }
}

// Colocar una letra en una posición
bool Tablero::colocarLetra(int posicion, char letra) {
    if (posicion < 0 || posicion >= static_cast<int>(celdas.size())) {
        return false;
    }
    celdas[posicion].guardarCaracter(&letra);
    return celdas[posicion].validarLetra();
}

// Mostrar el contenido del tablero
void Tablero::mostrarPalabra() {
    cout << "\nPalabra: ";
    for (size_t i = 0; i < celdas.size(); i++) {
        // ¡OJO AQUÍ!: Si marca error, verifica el nombre exacto en Celda.h
        char letra = celdas[i].getLetraIngresada();

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
    for (size_t i = 0; i < celdas.size(); i++) {
        if (!celdas[i].validarLetra()) {
            return false;
        }
    }
    return true;
}

// Comprobar si todas las celdas están ocupadas
bool Tablero::estaCompleto() {
    for (size_t i = 0; i < celdas.size(); i++) {
        // ¡OJO AQUÍ TAMBIÉN!: Verifica el nombre exacto en Celda.h
        if (celdas[i].getLetraIngresada() == '\0') {
            return false;
        }
    }
    return true;
}

// Reiniciar todas las celdas
void Tablero::reiniciarTablero() {
    for (size_t i = 0; i < celdas.size(); i++) {
        celdas[i].reiniciarCelda();
    }
}

// Obtener el número de celdas
int Tablero::getNumeroCeldas() {
    return static_cast<int>(celdas.size());
}
