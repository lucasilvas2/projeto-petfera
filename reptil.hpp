#pragma once

#include "animais.hpp"
enum Venenoso{
    nao,
    sim
};

class Reptil : public Animais{
    private:
        string classe = "Reptil";
        Venenoso veneno;
        double comprimento;

        ostream& print(ostream& o) const;
    public:
        Reptil(string id, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Venenoso veneno, double comprimento);
        ~Reptil();

        string getClasse() const;
        Venenoso getVeneno() const;
        double getComprimento() const;

        void setVeneno(Venenoso veneno);
        void setComprimento(double comprimento);

};      