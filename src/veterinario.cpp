#include "veterinario.hpp"

/**
*@brief Construtor da classe Veterinario
*@param Caracteristicas inerentes a veterinario
*/
Veterinario::Veterinario(string nome, string contato, string endereco, string crmv):
                        Profissional(nome, contato, endereco), crmv(crmv){}

Veterinario::~Veterinario(){}
  
/**
*@brief Retorna o registro do veterinario
*/
string Veterinario::getCrmv() const{
    return this-> crmv;
}

/**
*@brief Atribui um registro ao veterinario
*@param cod_crmv registro do veterinario
*/
void Veterinario::setCrmv(string cod_crmv){
    this-> crmv = crmv; 
}

/**
*@brief Imprime caracteristicas do veterinario
*@param Atributos a serem impressos
*/
ostream& Veterinario::print(ostream& o) const{
    o << "Nome: " << this-> nome << " | Contato: " << this-> contato 
		<<" | Veterinário CRMV: " << this-> crmv << endl;
    return o;
}