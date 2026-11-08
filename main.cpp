#include <iostream>
#include <string>
#include "Juego.h"
#include "Jugador.h"
#include "Tablero.h"
#include "Catalogo.h"

using namespace std;

int main() {
    string nombreUsuario;

    cout << "--- BIENVENIDO A PALABRAS REVUELTAS ---" << endl;
    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombreUsuario);

    // Inicialización de entidades
    Jugador jugadorActual(nombreUsuario);
    Catalogo catalogoPalabras("Ortografía");
    Tablero tableroJuego;

    // Instanciamos el juego uniendo las partes
    Juego partida(jugadorActual, tableroJuego, catalogoPalabras, 1, 1);

    partida.iniciarPartida();
    cout << "\nJuego iniciado. !Mucha suerte, " << jugadorActual.getNombre() << "!" << endl;

    // Aquí irá el bucle principal (Game Loop)

    return 0;
}
