#include "exotico.hpp"

Exotico::Exotico(string origem, formaIntroducao introducao):origem(origem), introducao(introducao){}
Exotico::~Exotico(){}

string Exotico::getSilvestre() const{
    return this-> silvestre;
}
string Exotico::getOrigem() const{
    return this-> origem;
}


formaIntroducao Exotico::getIntroducao() const{
    return this-> introducao;
}

void Exotico::setOrigem(string origem){
    this -> origem = origem;
}

void Exotico::setIntroducao(formaIntroducao introducao){
    this -> introducao = introducao;
}