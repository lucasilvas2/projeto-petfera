#include "mamifero_domestico.hpp"

/**
*@brief Construtor que instancia um objeto do tipo MamiferoDomestico
*@param Caracteristicas inerentes aos mamiferos domesticos
*/
MamiferoDomestico::MamiferoDomestico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Alimentacao tipoAlim):Mamifero(identificacao, preco, descricao, peso, sexo,tipoAlim){
					this-> tipoAnimal = mamiferoDomestico;
				}

/**
*@brief Destrutor da classe MamiferoDomestico
*/
MamiferoDomestico::~MamiferoDomestico(){}

/**
*@brief Método que imprime os dados do mamifero domestico
*@return atributos a serem impressos
*/
ostream& MamiferoDomestico::print(ostream& o) const{
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
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Alimentacao = "<< strTipoAlim 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
    return o;
}