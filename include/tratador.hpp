#pragma once
#include <iostream>
#include "profissional.hpp"

using std::string;

enum Nivel{
    verde, azul, vermelho
};

class Tratador : public Profissional{
private:
    Nivel nivel;

    ostream& print(ostream& o) const;
public:
    Tratador(string nome, string contato, string endereco, Nivel nivel);
    ~Tratador();

    Nivel getNivel()const;
    void setNivel(Nivel nivel);
};