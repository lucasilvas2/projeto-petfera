#include "profissional.hpp"


Profissional::Profissional(){}

/**
*@brief Construtor que instancia um objeto do tipo Profissional
*@param Caracteristicas inerentes aos profissionais 
*/
Profissional::Profissional(string nome, string contato, string endereco):nome(nome), contato(contato), endereco(endereco){}

/**
*@brief Destrutor da classe Profissional
*/
Profissional::~Profissional(){}

/**
*@brief Método que retorna a especialização do profissional
*@return tipoProfissional
*/
tpProf Profissional::getTipoProf() const{
	return this->tipoProfissional;
}

/**
*@brief Método que retorna o nome do Profissional
*@return nome do profissional
*/
string 
Profissional::getNome() const{
    return this-> nome;
}

/**
*@brief Método que retorna o numero de contato do profissional
*@return contato do profissional
*/
string 
Profissional::getContato() const{
    return this-> contato;
}

/**
*@brief Método que retorna o endereço do profissional
*@return endereco do profissional
*/
string 
Profissional::getEndereco() const{
    return this-> endereco;
}

/**
*@brief Método que atribui um nome ao profissional
*@param nome do profissional
*/
void 
Profissional::setNome(string nome){
    this-> nome = nome;
}

/**
*@brief Método que atribui o numero de contato do profissional
*@param contato do profissional
*/
void 
Profissional::setContato(string contato){
    this-> contato = contato;
}

/**
*@brief Método que atribui um endereço ao profissional
*@param endereco do profissional
*/
void 
Profissional::setEndereco(string endereco){
    this-> endereco = endereco;
}

/**
*@brief Sobrecarga do operador de inserção para impressão dos dados do profissional
*/
ostream& operator<<(ostream& o, Profissional const &pro){
    return pro.print(o);
}