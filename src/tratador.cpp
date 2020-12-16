#include "tratador.hpp"

/**
*@brief Construtor que instancia um objeto do tipo Tratador
*@param Caracteristicas inerentes aos tratadores
*/
Tratador::Tratador(string nome, string contato, string endereco,Nivel nivel)
					:Profissional(nome, contato, endereco), nivel(nivel){
						this->tipoProfissional=tratador;}

/**
*@brief Destrutor da classe Tratador
*/
Tratador::~Tratador(){}

/**
*@brief método que retorna o nivel do tratador
*@return nivel do tratador
*/
Nivel 
Tratador::getNivel() const{
	return this-> nivel;
}

/**
*@brief método que atribui um nivel ao tratador
*@param nivel do tratador
*/
void 
Tratador::setNivel(Nivel nivel){
	this-> nivel = nivel;
}

/**
*@brief Método que imprime os dados do tratador
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