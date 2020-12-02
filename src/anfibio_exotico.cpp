#include "anfibio_exotico.hpp"

AnfibioExotico::AnfibioExotico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venenosos tipoVen,string origem, formaIntroducao introducao)
                :Anfibio(identificacao, preco, descricao, peso, sexo, tipoVen),Exotico(origem, introducao){}
AnfibioExotico::~AnfibioExotico(){}

ostream& AnfibioExotico::print(ostream& o) const{
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
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Periculosidade = "<< strTipoVen 
        <<" | Origem = " << this-> origem
        <<" | Introdução = " << this ->  introducao << endl;
	return o;
}