#pragma once

#include "animais.hpp"
enum Alimentacao{
    Carnivoro,
    Herbivoro,
    Onivoro
};
class Mamiferos : public Animais{
    private:
        string classe = "Mamiferos";
        Alimentacao tipoAlim;

        ostream& print(ostream& o) const;
    public:
        Mamiferos(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim);
        ~Mamiferos();
        
        Alimentacao getAlimentacao() const;
        void setAlimentacao(Alimentacao tipoAlim);
};