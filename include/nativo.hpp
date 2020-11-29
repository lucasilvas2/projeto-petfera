#pragma once
#include <iostream>
#include <string>

using std::string;

class Nativo{
protected:
    string estado; //Estado que animal foi capturado 
    string licencaIBAMA;
public:
    Nativo(string estado, string licencaIBAMA);
    virtual ~Nativo();

    string getEstado() const;
    string getLicencaIBAMA() const;

    void setEstado(string estado);
    void setLicencaIBAMA(string licencaIBAMA);
};