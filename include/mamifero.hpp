#pragma once

#include "animal.hpp"
enum Alimentacao{
    Carnivoro,
    Herbivoro,
    Onivoro
};
class Mamifero : public Animal{
    protected:
        
        Alimentacao tipoAlim;

        ostream& print(ostream& o) const;
    public:
        Mamifero(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim);
        ~Mamifero();
        
        Alimentacao getAlimentacao() const;
        void setAlimentacao(Alimentacao tipoAlim);
};