#include "reptil_exotico.hpp"

ReptilExotico::ReptilExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string origem, formaIntroducao introducao):Reptil( identificacao, preco, descricao, coloracao,  ameacado, 
                 peso, sexo,veneno,  comprimento), Exotico(origem, introducao){}
ReptilExotico::~ReptilExotico(){}

ostream& ReptilExotico::print(ostream& o) const{
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
		<<" | Comprimento = "<< this-> comprimento << "(m)"
        <<" | Origem = " << this-> origem
        <<" | Introdução = " << this ->  introducao << endl;
    return o;
}