#ifndef ASTRONAUTAS_H
#define ASTRONAUTAS_H
#include <string>

using std::string;

class Astronautas
{
    private:
        int id;
        int cpf;
        string nome;
        int idade;
        bool status;

    public:
        void cadastrarAstronautas();
        void listasAstronautasVivos();
        void listarAstronautasMortos();
        void adicionarAstronautaEmVoo();
        void removerAstronautaDeUmVoo();
};
#endif