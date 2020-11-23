#pragma once

#include "animais.hpp"
enum HabilidadeVoo{
    ratitas, //não voam 
    carenatas //voam
};
class Aves : public Animais{
    private:
        string classe = "Aves";
        HabilidadeVoo habVoo;
        double envergadura;

        ostream& print(ostream& o) const;
    public:
        Aves(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura);
        ~Aves();
        HabilidadeVoo getHabilidadeVoo() const;
        double getEnvergadura() const;

        void setHabilidadeVoo(HabilidadeVoo habVoo);
        void setEnvergadura(double envergadura);
};