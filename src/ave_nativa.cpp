#include "ave_nativa.hpp"

AveNativa::AveNativa(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string estado, string licencaIBAMA):
                Ave(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, habVoo, envergadura), Nativo(estado, licencaIBAMA){}
AveNativa::~AveNativa(){}

ostream& AveNativa::print(ostream& o) const{
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
	string strHabVoo = (this-> habVoo == 0) ? "Ratita" : "Carenata";

	o<<"ID = " << this-> identificacao
		<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Ameaçado = "<< strAme
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Coloração = " << this -> coloracao
		<<" | Envergadura = "<< this-> envergadura<< "(m)"
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA << endl;
    return o;
}