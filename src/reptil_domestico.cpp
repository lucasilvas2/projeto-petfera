#include "reptil_domestico.hpp"

ReptilDomestico::ReptilDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento):Reptil( identificacao, preco, descricao, coloracao,  ameacado, 
                 peso, sexo,veneno,  comprimento){}
ReptilDomestico::~ReptilDomestico(){}

ostream& ReptilDomestico::print(ostream& o) const{
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
	string strVeneno = (this-> veneno == 0) ? "Não" : "Sim";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Ameaçado = "<< strAme
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Venenoso = " << strVeneno 
		<<" | Coloração = " << this -> coloracao
		<<" | Comprimento = "<< this-> comprimento << "(m)" << endl;
    return o;
}