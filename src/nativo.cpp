#include "nativo.hpp"

Nativo::Nativo(string estado, bool ameacado, string licencaIBAMA):estado(estado), ameacado(ameacado),licencaIBAMA(licencaIBAMA){}
Nativo::~Nativo(){}

string 
Nativo::getEstado() const{
    return this-> estado;
}
string 
Nativo::getLicencaIBAMA() const{
    return this-> licencaIBAMA;
}
bool 
Nativo::getAmeacado() const{
    return this-> ameacado;
}

Tratador* 
Nativo::getTratador() const{
	return this->tratador;
}

Veterinario* 
Nativo::getVeterinario() const{
	return this-> veterinario;
}

void 
Nativo::setEstado(string estado){
    this -> estado = estado;
}
void 
Nativo::setLicencaIBAMA(string licencaIBAMA){
    this-> licencaIBAMA = licencaIBAMA;
}
void 
Nativo::setAmeacado(bool ameacado){
    this->ameacado = ameacado;
}

void 
Nativo::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

void 
Nativo::setVeterinario(Veterinario &veterinario){
	this-> veterinario = &veterinario;
}