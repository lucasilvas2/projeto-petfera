#include "mamifero_exotico.hpp"

MamiferoExotico::MamiferoExotico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Alimentacao tipoAlim, string origem)
                :Mamifero(identificacao, preco, descricao,peso, sexo,tipoAlim), Exotico(origem){}
MamiferoExotico::~MamiferoExotico(){}

ostream& MamiferoExotico::print(ostream& o) const{
    string strVet;
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
	
	//string strAme=(this-> ameacado ==0)?"Não":"Sim";

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
		<<" | Alimentacao = "<< strTipoAlim
        <<" | Origem = " << this-> origem
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
    return o;
}