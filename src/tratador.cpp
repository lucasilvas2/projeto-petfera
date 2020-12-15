#include "tratador.hpp"

Tratador::Tratador(string nome, string contato, string endereco,Nivel nivel)
					:Profissional(nome, contato, endereco), nivel(nivel){
						this->tipoProfissional=tratador;}

Tratador::~Tratador(){}

Nivel 
Tratador::getNivel() const{
	return this-> nivel;
}

void 
Tratador::setNivel(Nivel nivel){
	this-> nivel = nivel;
}

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