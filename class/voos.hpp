#ifndef VOOS_HPP
#define VOOS_HPP
#include <iostream>
#include <list>
#include "astronauta.hpp"

using std::list;

class Voo
{
    private:
    int codigoVoo;
        list<Astronauta> listaAstronautas;
        bool planejamento;
        bool curso;
        bool sucesso;
    public:
        Voo(int codigoVoo_);
        ~Voo();
 
        int getId();
        void setId(int id);

        bool getPlanejamento();
        void setPlanejamento(bool planejamento);

        bool getCurso();
        void setCurso(bool curso);

        bool getSucesso();
        void setSucesso(bool sucesso);
};

Voo::Voo(int codigoVoo_)
{
    codigoVoo = codigoVoo_;
    planejamento = true;
    curso = false;
    sucesso = false;
}
#endif