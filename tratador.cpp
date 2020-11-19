#include "tratador.hpp"

Tratador::Tratador(string nome, Nivel nivel):nome(nome), nivel(nivel){}

Tratador::~Tratador(){}
string 
Tratador::getNome(){
	return this-> nome;
}
void Tratador::setNome(string nome){
	this-> nome = nome;
}
Nivel Tratador::getNivel(){
	return this-> nivel;
}
void Tratador::setNivel(Nivel nivel){
	this-> nivel = nivel;
}