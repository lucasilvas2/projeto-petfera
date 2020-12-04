#pragma once
#include <iostream>
#include <string>
#include "tratador.hpp"
#include "veterinario.hpp"

using std::string;

class Nativo{
protected:
    string estado; //Estado que animal foi capturado 
    bool ameacado;
    string licencaIBAMA;
    //Tratador* tratador=nullptr;
	//Veterinario* veterinario=nullptr;
public:
    Nativo(string estado, bool ameacado, string licencaIBAMA);
    virtual ~Nativo();

    string getEstado() const;
    string getLicencaIBAMA() const;
    bool getAmeacado() const;
    //Tratador* getTratador() const;
	//Veterinario* getVeterinario() const;

    void setEstado(string estado);
    void setLicencaIBAMA(string licencaIBAMA);
    void setAmeacado(bool ameacado); 
    //void setTratador(Tratador &tratador);
	//void setVeterinario(Veterinario &veterinario);
};