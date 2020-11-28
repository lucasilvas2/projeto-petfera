#pragma once

#include "animais.hpp"

enum Venomous{
    nao,
    sim
};

class Reptil : public Animais{
    private:
        string classe = "Reptil";
        Venomous veneno;
        double comprimento;

        ostream& print(ostream& o) const;
    public:
        Reptil(string id, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento);
        ~Reptil();

        string getClasse() const;
        Venomous getVeneno() const;
        double getComprimento() const;

        void setVeneno(Venomous veneno);
        void setComprimento(double comprimento);

}; 