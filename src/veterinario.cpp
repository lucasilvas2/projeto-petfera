#include "veterinario.hpp"

Veterinario::Veterinario(string nome, string contato, string endereco, string crmv):
                        Profissional(nome, contato, endereco), crmv(crmv){
                        	this->tipoProfissional=veterinario;}

Veterinario::~Veterinario(){}
  
string Veterinario::getCrmv() const{
    return this-> crmv;
}

void Veterinario::setCrmv(string cod_crmv){
    this-> crmv = crmv; 
}

ostream& Veterinario::print(ostream& o) const{
    o << "Nome: " << this-> nome << " | Contato: " << this-> contato 
		<<" | Veterinário CRMV: " << this-> crmv << endl;
    return o;
}