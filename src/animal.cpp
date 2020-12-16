#include "animal.hpp"
#include <iostream>

Animal::Animal(){}

/**
*@brief Construtor que instancia um objeto do tipo Animal
*@param Caracteristicas inerentes aos animais
*/
Animal::Animal(string identificacao, double preco, string descricao,
			double peso, tipoSexo sexo)
				:identificacao(identificacao), preco(preco), descricao(descricao),
				peso(peso), sexo(sexo){}

/**
*@brief Destrutor da classe Animal 
*/
Animal::~Animal(){}

/**
*@brief Método que retorna o tipo do animal
*@return tipoAnimal
*/
tpAnimal Animal::getTipoAnimal() const{
	return this-> tipoAnimal;
}

/**
*@brief Método que retorna o numero de identificação do animal
*@return identificação do animal
*/
string Animal::getIdentificacao() const{
	return this-> identificacao;
}

/**
*@brief Método que retorna o preço do animal
*@return preco do animal 
*/
double Animal::getPreco() const{
	return this->preco;
}

/**
*@brief Método que retorna a descrição do animal
*@return descricao do animal 
*/
string Animal::getDescricao() const{
	return this-> descricao;
}

/**
*@brief Método que retorna o peso do animal
*@return peso do animal 
*/
double Animal::getPeso() const{
	return this-> peso;
}

/**
*@brief Método que retorna o sexo do animal
*@return sexo do animal
*/
tipoSexo Animal::getSexo() const{
	return this-> sexo;
}

/**
*@brief Método que retorna o tratador encarregado do animal
*@return tratador do animal
*/
shared_ptr<Tratador> Animal::getTratador() const{
	return this->tratador;
}

/**
*@brief Método que retorna o veterinario do animal
*@return veterinario do animal
*/
shared_ptr<Veterinario> Animal::getVeterinario() const{
	return this-> veterinario;
}

/**
*@brief Método que atribui o tipo do animal ao animal
*@param tipoAnimal
*/
void Animal::setTipoAnimal(tpAnimal tipoAnimal){
	this ->tipoAnimal = tipoAnimal;
}

/**
*@brief Método que atribui o numero de identificação ao animal
*@param identificação do animal
*/
void Animal::setIdentificacao(string identificacao){
	this-> identificacao = identificacao;
}

/**
*@brief Método que atribui o preço ao animal
*@param preco do animal
*/
void Animal::setPreco(double preco){
	this->preco=preco;
}

/**
*@brief Método que atribui a descrição ao animal
*@param descricao do animal
*/
void Animal::setDescricao(string descricao){
	this -> descricao = descricao;
}

/**
*@brief Método que atribui um peso ao animal
*@param peso do animal
*/
void Animal::setPeso(double peso){
	this-> peso = peso;
}

/**
*@brief Método que atribui um sexo ao animal
*@param sexo do animal 
*/
void Animal::setSexo(tipoSexo sexo){
	this-> sexo = sexo;
}

/**
*@brief Método que atribui um tratador ao animal
*@param tratador 
*/
void Animal::setTratador(shared_ptr<Tratador> tratador){
	this->tratador = tratador;
}

/**
*@brief Método que atribui um veterinário ao animal
*@param veterinario
*/
void Animal::setVeterinario(shared_ptr<Veterinario> veterinario){
	this->veterinario = veterinario;
}

/**
*@brief Sobrecarga do operador de inserção para impressão dos atributos do animal
*/
ostream& operator<<(ostream& o, shared_ptr<Animal> const a){
	return a->print(o);
}