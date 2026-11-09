#include <iostream>
#include <string>
#include <vector>
#include "Juego.h"
#include "Jugador.h"
#include "Tablero.h"
#include "Catalogo.h"
#include "Palabra.h"

using namespace std;

int main() {

    string nombreUsuario;

    cout << "--- BIENVENIDO A PALABRAS REVUELTAS ---" << endl;
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombreUsuario);

    Jugador jugadorActual(nombreUsuario);
    vector<Palabra> listaVacia;
    Catalogo catalogoPalabras("Ortografía", listaVacia);
    Tablero tableroJuego;

    Juego partida(jugadorActual, tableroJuego, catalogoPalabras, 1, 1);

    partida.iniciarPartida();

    cout << "\nJuego iniciado. ¡Mucha suerte, " << jugadorActual.getNombre() << "!" << endl;

    return 0;
}
