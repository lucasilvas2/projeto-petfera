#include "exotico.hpp"

Exotico::Exotico(string origem):origem(origem){}

Exotico::~Exotico(){}

string Exotico::getOrigem() const{
    return this-> origem;
}


void Exotico::setOrigem(string origem){
    this-> origem = origem; 
}
