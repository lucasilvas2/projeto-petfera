#include "animais.hpp"
#include <iostream>

Animais::Animais(string identificacao, double preco, Habitat habitat, bool ameacado, double peso, tipoSexo sexo)
				:identificacao(identificacao), preco(preco),habitat(habitat),ameacado(ameacado), peso(peso), sexo(sexo){}

Animais::~Animais(){}

double Animais::getPreco() const{
	return this->preco;
}

bool Animais::getAmeacado() const{
	return this->ameacado;
}
void Animais::setPreco(double preco){
	this->preco=preco;
}

Habitat Animais::getHabitat() const{
	return this->habitat;
}

double Animais::getPeso() const{
	return this-> peso;
}
tipoSexo Animais::getSexo() const{
	return this-> sexo;
}
Tratador* Animais::getTratador() const{
	return this->tratador;
}

Veterinario* Animais::getVeterinario() const{
	return this-> veterinario;
}

void Animais::setAmeacado(bool ameacado){
	this->ameacado=ameacado;
}

void Animais::setHabitat(Habitat habitat){
	this->habitat=habitat;
}

void Animais::setPeso(double peso){
	this-> peso = peso;
}

void Animais::setSexo(tipoSexo sexo){
	this-> sexo = sexo;
}

void Animais::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

void Animais::setVeterinario(Veterinario &veterinario){
	this-> veterinario = &veterinario;
}

ostream& operator<<(ostream& o, Animais const &a){
	return a.print(o);
}
/*std::ostream& operator<<(std::ostream& o, Animais& a){
	std::string strVet;
	if(a.getVeterinario()==nullptr){
		strVet="sem vet";
	}else{
		strVet=a.getVeterinario()->getNome();
	}
	std::string strTra;
	if(a.getTratador()==nullptr){
		strTra="sem trat";
	}else{
		strTra=a.getTratador()->getNome();
	}
	std::string strHab;
	std::string strAme=(a.getAmeacado()==0)?"nao":"sim";
	if(a.getHabitat()==0){
		strHab="nativo";
	}else if(a.getHabitat()==1){
		strHab="exotico";
	}else{
		strHab="domestico";
	}

	o<<"preco ="<<a.getPreco()<<"| habitat ="<<strHab<<"| ameacado ="<<strAme
				<<"| vet. ="<<strVet<<"| trat. ="<<strTra<<std::endl;
return o;
}*/
