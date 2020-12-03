#include "anfibio.hpp"
#include <iomanip>

Anfibio::Anfibio(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venenosos tipoVen)
                :Animal(identificacao, preco, descricao, peso, sexo), tipoVen(tipoVen){}
Anfibio::~Anfibio(){}

Venenosos Anfibio::getVenenoso() const{
	return this->tipoVen; 
}

void Anfibio::setVenenoso(Venenosos tipoVen){
	this->tipoVen=tipoVen;
}

ostream& Anfibio::print(ostream& o) const{
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
	*/
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

	o<<"ID = " << this-> identificacao
		//<<" | Classe = Anfíbio" <<
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		//<<" | Veterinario = "<<strVet
		//<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Periculosidade = "<< strTipoVen << endl;
    return o;
}