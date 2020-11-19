#pragma once
#include <iostream>

using std::string;

enum Nivel{
    verde, azul, vermelho
};

class Tratador{
private:
    string nome;
    Nivel nivel; 
public:
    Tratador(string nome, Nivel nivel);
    ~Tratador();
    string getNome();
    void setNome(string nome);
    Nivel getNivel();
    void setNivel(Nivel nivel);
};