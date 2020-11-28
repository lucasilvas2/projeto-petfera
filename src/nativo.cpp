#include "nativo.hpp"

Nativo::Nativo(bool ameacado):ameacado(ameacado){}
Nativo::~Nativo(){}

string 
Nativo::getSilvestre() const{
    return this-> silvestre;
}
bool Nativo::getAmeacado() const{
    return this->ameacado;
}

void Nativo::setAmeacado(bool ameacado){
    this-> ameacado = ameacado;
}