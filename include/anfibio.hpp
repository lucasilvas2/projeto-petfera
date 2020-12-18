#pragma once

#include "animal.hpp"
enum Venenosos{
    naoVenenoso,
    Venenoso
};
class Anfibio : public Animal{
    protected:
        Venenosos tipoVen;

        //ostream& print(ostream& o) const;
    public:
        Anfibio(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Venenosos tipoVen);
        ~Anfibio();
        
        Venenosos getVenenoso() const;
        void setVenenoso(Venenosos tipoVen);
    private:
        virtual ostream& print(ostream& o) const = 0;
};