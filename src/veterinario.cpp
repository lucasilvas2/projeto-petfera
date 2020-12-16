#include "veterinario.hpp"

/**
*@brief Construtor que instancia um objeto do tipo Veterinario
*@param Caracteristicas inerentes aos veterinarios
*/
Veterinario::Veterinario(string nome, string contato, string endereco, string crmv):
                        Profissional(nome, contato, endereco), crmv(crmv){
                        	this->tipoProfissional=veterinario;}

/**
*@brief Destrutor da classe Veterinario 
*/
Veterinario::~Veterinario(){}

/**
*@brief Método que retorna o CRMV do veterianrio
*@return crmv do veterinario
*/
string Veterinario::getCrmv() const{
    return this-> crmv;
}

/**
*@brief Método que atribui um numero de CRMV ao veterinario
*@param cod_crmv do veterinario
*/
void Veterinario::setCrmv(string cod_crmv){
    this-> crmv = crmv; 
}

/**
*@brief Método que imprime os dados do veterinario
*@return atributos a serem impressos
*/
ostream& Veterinario::print(ostream& o) const{
    o << "Nome: " << this-> nome << " | Contato: " << this-> contato 
		<<" | Veterinário CRMV: " << this-> crmv << endl;
    return o;
}