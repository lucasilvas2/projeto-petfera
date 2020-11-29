#include "animal.hpp"
#include <iostream>

Animal::Animal(string identificacao, double preco, string descricao,
			 string coloracao, bool ameacado, double peso, tipoSexo sexo)
				:identificacao(identificacao), preco(preco), descricao(descricao), coloracao(coloracao), 
				ameacado(ameacado), peso(peso), sexo(sexo){}

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
	
string Animal::getColoracao() const{
	return this-> coloracao;
}

bool Animal::getAmeacado() const{
	return this->ameacado;
}

double Animal::getPeso() const{
	return this-> peso;
}
tipoSexo Animal::getSexo() const{
	return this-> sexo;
}
Tratador* Animal::getTratador() const{
	return this->tratador;
}

Veterinario* Animal::getVeterinario() const{
	return this-> veterinario;
}

void Animal::setIdentificacao(string identificacao){
	this-> identificacao = identificacao;
}

void Animal::setAmeacado(bool ameacado){
	this->ameacado=ameacado;
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

void Animal::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

void Animal::setVeterinario(Veterinario &veterinario){
	this-> veterinario = &veterinario;
}

ostream& operator<<(ostream& o, Animal const &a){
	return a.print(o);
}