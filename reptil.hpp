#pragma once

#include "animais.hpp"

class Reptil : public Animais{
    private:
        string classe;
        string descricao;
        string cor;
        double comprimento;

        ostream& print(ostream& o) const;
    public:
        Reptil(string identificacao, double preco, Habitat habitat, bool ameacado, double peso,
                string descricao, string cor, double comprimento);
        ~Reptil();

        string getClasse() const;
        string getDescricao() const;
        string getCor() const;
        double getComprimento() const;

        void setDescricao(string descricao);
        void setCor(string cor);
        void setComprimento(double comprimento);

};      