#ifndef SISTEMAESTAO_HPP
#define SISTEMAESTAO_HPP
#include <list>
#include "astronauta.hpp"
#include "voos.hpp"

using std::list;

class SistemaGestao
{
    private:
        list<Astronauta> listaAstronautas;
        list<Voo> listaVoos;

    public:
        void cadastroAstronauta(string cpf, string nome, int idade);
        void cadastroVoo();

        void listarAstronautasVivos();
        void listarAstronautasMortos();
        void listarVoos();

        void adicionarAstronautaVoo();
        void removerAstronautaVoo();

        void lancarVoo();
        void finalizarVoo();
        void contatarVoo();
};
#endif