#pragma once
#include <iostream>
#include <string>

using std::string;

class Nativo{
protected:
    string estado;
    string licencaIBAMA;
public:
    Nativo(string estado, string licencaIBAMA);
    virtual ~Nativo();

    string getEstado() const;
    string getLicencaIBAMA() const;

    void setEstado(string estado);
    void setLicencaIBAMA(string licencaIBAMA);
};