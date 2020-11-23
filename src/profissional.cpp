#include "profissional.hpp"

Profissional::Profissional(){}
Profissional::Profissional(string nome, string contato, string endereco):nome(nome), contato(contato), endereco(endereco){}
Profissional::~Profissional(){}

string 
Profissional::getNome() const{
    return this-> nome;
}
string 
Profissional::getContato() const{
    return this-> contato;
}
string 
Profissional::getEndereco() const{
    return this-> endereco;
}

void 
Profissional::setNome(string nome){
    this-> nome = nome;
}
void 
Profissional::setContato(string contato){
    this-> contato = contato;
}
void 
Profissional::setEndereco(string endereco){
    this-> endereco = endereco;
}

ostream& operator<<(ostream& o, Profissional const &pro){
    return pro.print(o);
}