#pragma once

#include "animal.hpp"
enum HabilidadeVoo{
    ratitas, //não voam 
    carenatas //voam
};
class Ave : public Animal{
    protected:
        //string classe = "Aves";
        HabilidadeVoo habVoo;
        double envergadura;

    public:
        Ave(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura);
        ~Ave();
        HabilidadeVoo getHabilidadeVoo() const;
        double getEnvergadura() const;

        void setHabilidadeVoo(HabilidadeVoo habVoo);
        void setEnvergadura(double envergadura);
    private:
        virtual ostream& print(ostream& o) const = 0;
};