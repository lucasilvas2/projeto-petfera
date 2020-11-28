#pragma once

#include "animal.hpp"
enum Venenosos{
    naoVenenoso,
    Venenoso
};
class Anfibios : public Animais{
    private:
        string classe = "Anfibios";
        Venenosos tipoVen;

        ostream& print(ostream& o) const;
    public:
        Anfibios(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen);
        ~Anfibios();
        
        Venenosos getVenenoso() const;
        void setVenenoso(Venenosos tipoVen);
};