#include "tratador.hpp"

/**
*@brief Construtor da classe Tratador
*@param Caracteristicas inerentes a tratador
*/
Tratador::Tratador(string nome, string contato, string endereco,Nivel nivel)
					:Profissional(nome, contato, endereco), nivel(nivel){}

Tratador::~Tratador(){}

/**
*@brief Retorna o nivel do tratador
*/
Nivel 
Tratador::getNivel() const{
	return this-> nivel;
}

/**
*@brief Atribui um nivel ao tratador
*@param nivel do tratador
*/
void 
Tratador::setNivel(Nivel nivel){
	this-> nivel = nivel;
}

/**
*@brief imprime caracteristicas do tratador
*@return atributos a serem impressos
*/
ostream& Tratador::print(ostream& o) const{
	string strNivel;

	if(this-> nivel == 0){
		strNivel = "Verde";
	}
	else if(this -> nivel == 1){
		strNivel = "Azul";
	}
	else
	{
		strNivel = "Vermelho";
	}

	o << "Nome: " << this-> nome << " | Contato: " << this-> contato 
		<<" | Tratador Nível: " << strNivel << endl;
	return o;
}