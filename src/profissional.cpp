#include "profissional.hpp"

Profissional::Profissional(){}

/**
*@brief Construtor da classe Profissional
*@param Caracteristicas inerentes ao profissional
*/
Profissional::Profissional(string nome, string contato, string endereco):nome(nome), contato(contato), endereco(endereco){}

Profissional::~Profissional(){}

/**
*@brief Retorna nome do profissional
*/
string 
Profissional::getNome() const{
    return this-> nome;
}

/**
*@brief Retorna o contato do profissional
*/
string 
Profissional::getContato() const{
    return this-> contato;
}

/**
*@brief Retorna o endereço do profissional
*/
string 
Profissional::getEndereco() const{
    return this-> endereco;
}

/**
*@brief Atribui nome ao profissional
*@param nome do profissional
*/
void 
Profissional::setNome(string nome){
    this-> nome = nome;
}

/**
*@brief Atribui numero de contato ao profissional
*@param contato numero
*/
void 
Profissional::setContato(string contato){
    this-> contato = contato;
}

/**
*@brief Atribui endereço ao profissional
*@param endereco do profissional
*/
void 
Profissional::setEndereco(string endereco){
    this-> endereco = endereco;
}

/**
*@brief sobrecarga do operador de inserção para impressão
*@param profissional cujos atributos serão impressos
*/
ostream& operator<<(ostream& o, Profissional const &pro){
    return pro.print(o);
}