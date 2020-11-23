#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Profissional{
    protected:
        string nome;
        string contato;
        string endereco;
    public:
        Profissional();
        Profissional(string nome, string contato, string endereco);
        virtual ~Profissional();

        //gets
        string getNome() const;
        string getContato() const;
        string getEndereco() const;
        //sets
        void setNome(string nome);
        void setContato(string contato);
        void setEndereco(string endereco);

        friend ostream& operator<<(ostream& o, Profissional const &pro);
    private:
        virtual ostream& print(ostream&) const = 0;
};