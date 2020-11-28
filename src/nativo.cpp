#include "nativo.hpp"

 Nativo::Nativo(string estado, string licencaIBAMA):estado(estado), licencaIBAMA(licencaIBAMA){}
 Nativo::~Nativo(){}

string Nativo::getEstado() const{
    return this-> estado;
}
string Nativo::getLicencaIBAMA() const{
    return this-> licencaIBAMA;
}

void Nativo::setEstado(string estado){
    this -> estado = estado;
}
void Nativo::setLicencaIBAMA(string licencaIBAMA){
    this-> licencaIBAMA = licencaIBAMA;
}