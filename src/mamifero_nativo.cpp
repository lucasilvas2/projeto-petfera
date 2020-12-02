#include "mamifero_nativo.hpp"

MamiferoNativo::MamiferoNativo(string identificacao, double preco, string descricao,
               double peso, tipoSexo sexo, Alimentacao tipoAlim, string estado, bool ameacado,string licencaIBAMA)
               :Mamifero(identificacao, preco, descricao, peso, sexo,tipoAlim), Nativo(estado, ameacado,licencaIBAMA){}
MamiferoNativo::~MamiferoNativo(){}

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
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Alimentacao = "<< strTipoAlim
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA << endl;
    return o;
}