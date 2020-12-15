#pragma once
#include <iomanip>
#include <iostream>
#include <memory>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

enum tpProf{
    veterinario,
    tratador
};

class Profissional{
    protected:
        tpProf tipoProfissional;
        string nome;
        string contato;
        string endereco;
    public:
        Profissional();
        Profissional(string nome, string contato, string endereco);
        virtual ~Profissional();

        //gets
        tpProf getTipoProf() const;
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