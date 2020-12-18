#include "mamifero.hpp"
#include <iomanip>

/**
*@brief Construtor que instancia um objeto do tipo Mamifero
*@param Caracteristicas inerentes aos mamiferos
*/
Mamifero::Mamifero(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Alimentacao tipoAlim)
                :Animal(identificacao, preco, descricao, peso, sexo), tipoAlim(tipoAlim){}

/**
*@brief Destrutor da classe Mamifero
*/
Mamifero::~Mamifero(){}

/**
*@brief Método que retorna se o mamifero é carnivoro, herbivoro ou onivoro
*@return tipoAlim carnivoro, herbivoro ou onivoro
*/
Alimentacao Mamifero::getAlimentacao() const{
	return this->tipoAlim; 
}

/**
*@brief Método que atribui ao mamifero se ele é carnivoro, herbivoro ou onivoro
*@param tipoAlim
*/
void Mamifero::setAlimentacao(Alimentacao tipoAlim){
	this->tipoAlim=tipoAlim;
}

/**
*@brief Método que imprime os dados do mamifero
*@return atributos a serem impressos
*/
/*ostream& Mamifero::print(ostream& o) const{
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
	string strAme=(this-> ameacado ==0)?"Não":"Sim";
	string strHab;
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
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Alimentacao = "<< strTipoAlim << endl;
    return o;
}*/