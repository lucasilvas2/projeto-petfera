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
       
    public:
        Mamifero(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim);
        ~Mamifero();
        
        Alimentacao getAlimentacao() const;
        void setAlimentacao(Alimentacao tipoAlim);
    private:
        virtual ostream& print(ostream& o) const = 0;
};