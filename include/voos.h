#ifndef VOOS_H
#define VOOS_H
#include "astronautas.h"

class Voo
{
    private:
        int id;
        Astronautas lista_de_astronautas;
        int status;
    public:
        void cadastrarVoo();
        void listarVoos();
        void lancarVoo();
        void finalizarVoo();
        void contatarVoo();
};
#endif