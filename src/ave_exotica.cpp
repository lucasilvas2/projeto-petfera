#include "ave_exotica.hpp"

AveExotica::AveExotica(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string origem)
                :Ave(identificacao, preco, descricao, peso, sexo, habVoo, envergadura),Exotico(origem){}
AveExotica::~AveExotica(){}

ostream& AveExotica::print(ostream& o) const{
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
	string strHabVoo = (this-> habVoo == 0) ? "Ratita" : "Carenata";

	o<<"ID = " << this-> identificacao
		//<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Envergadura = "<< this-> envergadura<< "(m)"
        <<" | Origem = " << this-> origem
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
    return o;
}