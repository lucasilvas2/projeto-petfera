#include "animal.hpp"
#include <iostream>

Animal::Animal(string identificacao, double preco, string descricao,
			double peso, tipoSexo sexo)
				:identificacao(identificacao), preco(preco), descricao(descricao),
				peso(peso), sexo(sexo){}

Animal::~Animal(){}

string Animal::getIdentificacao() const{
	return this-> identificacao;
}
double Animal::getPreco() const{
	return this->preco;
}
string Animal::getDescricao() const{
	return this-> descricao;
}

double Animal::getPeso() const{
	return this-> peso;
}
tipoSexo Animal::getSexo() const{
	return this-> sexo;
}
/*
Tratador* Animal::getTratador() const{
	return this->tratador;
}

Veterinario* Animal::getVeterinario() const{
	return this-> veterinario;
}
*/

void Animal::setIdentificacao(string identificacao){
	this-> identificacao = identificacao;
}

void Animal::setPreco(double preco){
	this->preco=preco;
}

void Animal::setPeso(double peso){
	this-> peso = peso;
}

void Animal::setSexo(tipoSexo sexo){
	this-> sexo = sexo;
}

/*
void Animal::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

void Animal::setVeterinario(Veterinario &veterinario){
	this-> veterinario = &veterinario;
}
*/

ostream& operator<<(ostream& o, Animal const &a){
	return a.print(o);
}