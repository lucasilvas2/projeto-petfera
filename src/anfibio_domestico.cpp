#include "anfibio_domestico.hpp"

AnfibioDomestico::AnfibioDomestico(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Venenosos tipoVen):Anfibio(identificacao, preco, descricao, peso, sexo, tipoVen){
					this-> tipoAnimal = anfibioDomestico;
				}
AnfibioDomestico::~AnfibioDomestico(){}

ostream& AnfibioDomestico::print(ostream& o) const{
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
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Periculosidade = "<< strTipoVen 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
		return o;
}