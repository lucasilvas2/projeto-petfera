#include "mamiferos.hpp"
#include <iomanip>

/**
*@brief Construtor da classe Mamiferos
*@param Caracteristicas inerentes aos mamiferos
*/
Mamiferos::Mamiferos(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim)
                :Animais(identificacao, preco, descricao, coloracao, habitat, ameacado, peso, sexo), tipoAlim(tipoAlim){}
Mamiferos::~Mamiferos(){}

/**
*@brief Retorna carnivoro herbivoro ou onivoro
*/
Alimentacao Mamiferos::getAlimentacao() const{
	return this->tipoAlim; 
}

/**
*@brief Atribui carnivoro herbivoro ou onivoro ao animal
*@param tipoAlim carnivoro herbivoro ou onivoro
*/
void Mamiferos::setAlimentacao(Alimentacao tipoAlim){
	this->tipoAlim=tipoAlim;
}

/**
*@brief Imprime caracteristicas do mamifero
*@return Atributos a serem impressos
*/
ostream& Mamiferos::print(ostream& o) const{
    std::string strVet;
	if(getVeterinario()==nullptr){
		strVet="Sem veterinario";
	}else{
		strVet=getVeterinario()->getNome();
	}
	std::string strTra;
	if(getTratador()==nullptr){
		strTra="Sem tratador";
	}else{
		strTra=getTratador()->getNome();
	}
	string strHab;
	string strAme=(this-> ameacado ==0)?"Não":"Sim";
	if(this-> habitat==0){
		strHab="Nativo";
	}else if(this-> habitat==1){
		strHab="Exotico";
	}else{
		strHab="Domestico";
	}
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoAlim;
	if(this-> tipoAlim == 0){
		strTipoAlim="Carnivoro";
	}else if(this->tipoAlim==1){
		strTipoAlim="Herbivoro";
	}else{
		strTipoAlim="Onivoro";
	}

	o<<"ID = " << this-> identificacao
		<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Habitat = "<< strHab 
		<<" | Ameaçado = "<< strAme
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Coloração = " << this -> coloracao
		<<" | Alimentacao = "<< strTipoAlim << endl;
    return o;
}