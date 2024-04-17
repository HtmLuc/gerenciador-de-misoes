#ifndef ASTRONAUTAS_HPP
#define ASTRONAUTAS_HPP
#include <string>

using std::string;

class Astronauta
{
    private:
        string cpf;
        string nome;
        int idade;
        bool disponibilidade; //T - disponível; F - não disponível
        bool status; //T - vivo; F - morto

    public:
        Astronauta(string cpf_, string nome_, int idade_);
        ~Astronauta();

        string getCpf();
        void setCpf(string cpf);

        string getNome();
        void setNome(string nome);

        bool getDisponibilidade();
        void setDisponibilidade(bool disponivel);

        bool getStatus();
        void setStatus(bool status);
};

Astronauta::Astronauta(string cpf_, string nome_, int idade_)
{
    cpf = cpf_;
    nome = nome_;
    idade = idade_;
    disponibilidade = true;
    status = true;
}
#endif