#ifndef CELDA_H
#define CELDA_H

class Celda
{
    public:
        Celda();
        Celda(char* li, char* la);
        virtual ~Celda();

        char* getLetraingresada();
        char* getLetraAcertada();

        void guardarCaracter(char* caracter);
        bool validarLetra();
        void reiniciarCelda();

    private:
        char letraingresada;
        char letraacertada;
};

#endif // CELDA_H
