#include "mamifero_nativo.hpp"

/**
*@brief Construtor que instancia um objeto do tipo MamiferoNativo
*@param Caracteristicas inerentes aos mamiferos nativos 
*/
MamiferoNativo::MamiferoNativo(string identificacao, double preco, string descricao,
               double peso, tipoSexo sexo, Alimentacao tipoAlim, string estado, bool ameacado,string licencaIBAMA)
               :Mamifero(identificacao, preco, descricao, peso, sexo,tipoAlim), Nativo(estado, ameacado,licencaIBAMA){
				   this-> tipoAnimal = mamiferoNativo;
			   }

/**
*@brief Destrutor da classe MamiferoNativo
*/
MamiferoNativo::~MamiferoNativo(){}

/**
*@brief Método que imprime os dados do mamifero nativo
*@return atributos a serem impressos
*/
ostream& MamiferoNativo::print(ostream& o) const{
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
		<<" | Ameaçado = "<< strAme
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Alimentacao = "<< strTipoAlim
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
    return o;
}