#include "mamiferos.hpp"

Mamiferos::Mamiferos(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim)
                :Animais(identificacao, preco, descricao, coloracao, habitat, ameacado, peso, sexo), tipoAlim(tipoAlim){}
Mamiferos::~Mamiferos(){}

Alimentacao Mamiferos::getAlimentacao() const{
	return this->tipoAlim; 
}

void Mamiferos::setAlimentacao(Alimentacao tipoAlim){
	this->tipoAlim=tipoAlim;
}

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
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
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