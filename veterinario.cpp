#include "veterinario.hpp"

Veterinario::Veterinario(string nome, string crmv):nome(nome), crmv(crmv){}

Veterinario::~Veterinario(){}

string 
Veterinario::getNome(){
    return this-> nome;
}
    
void Veterinario::setNome(string nome){
    this-> nome = nome;
}
string Veterinario::getCrmv(){
    return this-> crmv;
}
void Veterinario::setCrmv(string cod_crmv){
    this-> crmv = crmv; 
}