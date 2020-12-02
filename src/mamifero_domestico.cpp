#include "mamifero_domestico.hpp"

MamiferoDomestico::MamiferoDomestico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Alimentacao tipoAlim):Mamifero(identificacao, preco, descricao, peso, sexo,tipoAlim){}
MamiferoDomestico::~MamiferoDomestico(){}

ostream& MamiferoDomestico::print(ostream& o) const{
    /*std::string strVet;
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
	string strAme=(this-> ameacado ==0)?"Não":"Sim";*/

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
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Alimentacao = "<< strTipoAlim << endl;
    return o;
}