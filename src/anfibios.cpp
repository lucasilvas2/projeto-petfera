#include "anfibios.hpp"
#include <iomanip>

/**
*@brief Construtor da classe Anfibios
*@param Caracteristicas inerentes aos anfibios
*/
Anfibios::Anfibios(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen)
                :Animais(identificacao, preco, descricao, coloracao, habitat, ameacado, peso, sexo), tipoVen(tipoVen){}
Anfibios::~Anfibios(){}

/**
*@brief Retorna venenoso ou não venenoso
*/
Venenosos Anfibios::getVenenoso() const{
	return this->tipoVen; 
}

/**
*@brief Atribui ao anfibio venenoso ou não venenoso
*@param tipoVen venenoso ou não venenoso
*/
void Anfibios::setVenenoso(Venenosos tipoVen){
	this->tipoVen=tipoVen;
}

/**
*@brief Imprime caracteristicas do anfibio
*@return Atributos a serem impressos
*/
ostream& Anfibios::print(ostream& o) const{
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
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

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
		<<" | Periculosidade = "<< strTipoVen << endl;
    return o;
}