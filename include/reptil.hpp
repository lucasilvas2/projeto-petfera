#pragma once

#include "animal.hpp"

enum Venomous{
    nao,
    sim
};

class Reptil : public Animal{
    protected:
        
        Venomous veneno;
        double comprimento;
     
    public:
        Reptil(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento);
        virtual ~Reptil();

        Venomous getVeneno() const;
        double getComprimento() const;

        void setVeneno(Venomous veneno);
        void setComprimento(double comprimento);
    private:
        virtual ostream& print(ostream& o) const = 0;
}; 