#include "ave.hpp"
#include <iomanip>

Ave::Ave(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura)
                :Animal(identificacao, preco, descricao, peso, sexo), habVoo(habVoo),
                envergadura(envergadura){}
Ave::~Ave(){}
HabilidadeVoo Ave::getHabilidadeVoo() const{
    return this-> habVoo;
}
double Ave::getEnvergadura() const{
    return this-> envergadura;
}

void Ave::setHabilidadeVoo(HabilidadeVoo habVoo){
    this-> habVoo = habVoo;
}
void Ave::setEnvergadura(double envergadura){
    this-> envergadura = envergadura;
}
ostream& Ave::print(ostream& o) const{
    /*string strVet;
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
	}*/

	/*string strHab;
	if(this-> habitat==0){
		strHab="Nativo";
	}else if(this-> habitat==1){
		strHab="Exotico";
	}else{
		strHab="Domestico";
	}*/

	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strHabVoo = (this-> habVoo == 0) ? "Ratita" : "Carenata";

	o<<"ID = " << this-> identificacao
		//<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		//<<" | Veterinario = "<<strVet
		//<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Envergadura = "<< this-> envergadura<< "(m)"<< endl;
    return o;
}