#include "Juego.h"

Juego::Juego(Jugador jugador, Tablero tablero, Catalogo catalogo, int dificultad, int nivel)
    : jugador(jugador), tablero(tablero), catalogo(catalogo),
      nivelDificultad(dificultad), nivelJuego(nivel), estado(EstadoJuego::ACTIVO) {}

EstadoJuego Juego::getEstado() { return estado; }
int Juego::getNivelDificultad() { return nivelDificultad; }
int Juego::getNivelJuego() { return nivelJuego; }

void Juego::iniciarPartida() { estado = EstadoJuego::ACTIVO; }
void Juego::mostrarPalabra() { tablero.mostrarPalabra(); }
bool Juego::comprobarRespuesta(std::string respuesta) { return true; }
void Juego::asignarPuntos() { jugador.acumularPuntos(10); }
void Juego::repetirPalabra() { /* Lógica para reingresar al catálogo */ }
bool Juego::finPartida() { return estado == EstadoJuego::FINALIZADO; }
void Juego::mostrarPuntaje() { /* Imprimir jugador.getPuntos() */ }
