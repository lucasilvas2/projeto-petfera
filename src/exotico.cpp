#include "exotico.hpp"

/**
*@brief Construtor que instancia um objeto do tipo Exotico
*@param Caracteristica inerente aos exoticos
*/
Exotico::Exotico(string origem):origem(origem){}

/**
*@brief Destrutor da classe Exotico
*/
Exotico::~Exotico(){}

/**
*@brief Método que retorna a origem do animal exotico
*@return origem do animal
*/
string Exotico::getOrigem() const{
    return this-> origem;
}

/**
*@brief Método que atribui a origem do animal exotico
*@param origem do animal
*/
void Exotico::setOrigem(string origem){
    this-> origem = origem; 
}
