#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Profissional{
    protected:
        string nome;
        string contato;
        string endereco;
    public:
        Profissional();
        Profissional(string nome, string contato, string endereco);
        ~Profissional();

        //gets
        string getNome() const;
        string getContato() const;
        string getEndereco() const;
        //sets
        void setNome(string nome);
        void setContato(string contato);
        void setEndereco(string endereco);
};