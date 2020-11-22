#pragma once

#include "animais.hpp"
enum Venenoso{
    nao,
    sim
};

class Reptil : public Animais{
    private:
        string classe = "Reptil";
        string descricao;
        Venenoso veneno;
        string cor;
        double comprimento;

        ostream& print(ostream& o) const;
    public:
        Reptil(string identificacao, double preco, Habitat habitat, bool ameacado, double peso, tipoSexo sexo,
                string descricao, Venenoso veneno,string cor, double comprimento);
        ~Reptil();

        string getClasse() const;
        string getDescricao() const;
        Venenoso getVeneno() const;
        string getCor() const;
        double getComprimento() const;

        void setDescricao(string descricao);
        void setVeneno(Venenoso veneno);
        void setCor(string cor);
        void setComprimento(double comprimento);

};      