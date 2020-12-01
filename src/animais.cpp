#include "animais.hpp"
#include <iostream>

/**
*@brief Construtor da classe Animais
*@param Caracteristicas inerentes aos animais
*/
Animais::Animais(string identificacao, double preco, string descricao,
			 string coloracao, Habitat habitat, bool ameacado, double peso, tipoSexo sexo)
				:identificacao(identificacao), preco(preco), descricao(descricao), coloracao(coloracao), habitat(habitat), 
				ameacado(ameacado), peso(peso), sexo(sexo){}

Animais::~Animais(){}

/**
*@brief Retorna o numero de identificacao do animal
*/
string Animais::getIdentificacao() const{
	return this-> identificacao;
}

/**
*@brief Retorna o preço do animal
*/
double Animais::getPreco() const{
	return this->preco;
}

/**
*@brief Retorna a descrição do animal
*/
string Animais::getDescricao() const{
	return this-> descricao;
}

/**
*@brief Retorna a cor do animal
*/
string Animais::getColoracao() const{
	return this-> coloracao;
}

/**
*@brief Retorna se animal é ameaçado de extinção
*/
bool Animais::getAmeacado() const{
	return this->ameacado;
}

/**
*@brief Retorna o habitat do animal
*/
Habitat Animais::getHabitat() const{
	return this->habitat;
}

/**
*@brief Retorna o peso do animal
*/
double Animais::getPeso() const{
	return this-> peso;
}

/**
*@brief Retorna o sexo do animal
*/
tipoSexo Animais::getSexo() const{
	return this-> sexo;
}

/**
*@brief Retorna o tratador do animal
*@return Ponteiro para um tratador
*/
Tratador* Animais::getTratador() const{
	return this->tratador;
}

/**
*@brief Retorna o veterinario do animal
*@return Ponteiro para um veterinario
*/
Veterinario* Animais::getVeterinario() const{
	return this-> veterinario;
}

/**
*@brief Atribui um numero de identificação ao animal
*@param identificacao numero do animal
*/
void Animais::setIdentificacao(string identificacao){
	this-> identificacao = identificacao;
}

/**
*@brief Atribui condição ameaçado ou não ameaçado de extinção
*@param ameacado ou não ameaçado de extinção
*/
void Animais::setAmeacado(bool ameacado){
	this->ameacado=ameacado;
}

/**
*@brief Atribui preço ao animal
*@param preco do animal
*/
void Animais::setPreco(double preco){
	this->preco=preco;
}

/**
*@brief Atribui o habitat do animal
*@param habitat do animal
*/
void Animais::setHabitat(Habitat habitat){
	this->habitat=habitat;
}

/**
*@brief Atribui peso ao animal
*@param peso do animal
*/
void Animais::setPeso(double peso){
	this-> peso = peso;
}

/**
*@brief Atribui sexo ao animal
*@param sexo do animal
*/
void Animais::setSexo(tipoSexo sexo){
	this-> sexo = sexo;
}

/**
*@brief Atribui tratador ao animal
*@param tratador
*/
void Animais::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

/**
*@brief Atribui veterinario ao animal
*@param veterinario
*/
void Animais::setVeterinario(Veterinario &veterinario){
	this-> veterinario = &veterinario;
}

/**
*@brief Sobrecarga do operador de inserção para impressão
*@param a animal cujas caracteristicas serão impressas
*/
ostream& operator<<(ostream& o, Animais const &a){
	return a.print(o);
}

void Animais::setProfissional(Profissional &profissional){
	this->profissional = &profissional;
}