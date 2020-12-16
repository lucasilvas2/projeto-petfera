#include "reptil_domestico.hpp"

/**
*@brief Construtor que instancia um objeto do tipo ReptilDomestico
*@param Caracteristicas inerentes aos repteis domesticos
*/
ReptilDomestico::ReptilDomestico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venomous veneno, double comprimento):Reptil( identificacao, preco, descricao, 
                peso, sexo,veneno,  comprimento){
					this-> tipoAnimal = reptilDomestico;
				}

/**
*@brief Destrutor da classe ReptilDomestico
*/
ReptilDomestico::~ReptilDomestico(){}

/**
*@brief Método que imprime os dados do reptil domestico
*@return atributos a serem impressos
*/
ostream& ReptilDomestico::print(ostream& o) const{
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
	string strVeneno = (this-> veneno == 0) ? "Não" : "Sim";

	o<< "ID = " << this-> identificacao
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Venenoso = " << strVeneno 
		<<" | Comprimento = "<< this-> comprimento << "(m)" 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
		
    return o;
}