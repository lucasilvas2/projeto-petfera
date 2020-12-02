#include "reptil_exotico.hpp"

ReptilExotico::ReptilExotico(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string origem):Reptil( identificacao, preco, descricao,
                 peso, sexo,veneno,  comprimento), Exotico(origem){}
ReptilExotico::~ReptilExotico(){}

ostream& ReptilExotico::print(ostream& o) const{
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
	string strAme=(this-> ameacado ==0)?"Não":"Sim";*/
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strVeneno = (this-> veneno == 0) ? "Não" : "Sim";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Venenoso = " << strVeneno 
		<<" | Comprimento = "<< this-> comprimento << "(m)"
        <<" | Origem = " << this-> origem << endl;
    return o;
}