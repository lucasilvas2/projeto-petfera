#include "aves.hpp"

Aves::Aves(string identificacao, double preco, string descricao,string coloracao, Habitat habitat, bool ameacado, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura)
                :Animais(identificacao, preco, descricao, coloracao, habitat, ameacado, peso, sexo), habVoo(habVoo),
                envergadura(envergadura){}
Aves::~Aves(){}
HabilidadeVoo Aves::getHabilidadeVoo() const{
    return this-> habVoo;
}
double Aves::getEnvergadura() const{
    return this-> envergadura;
}

void Aves::setHabilidadeVoo(HabilidadeVoo habVoo){
    this-> habVoo = habVoo;
}
void Aves::setEnvergadura(double envergadura){
    this-> envergadura = envergadura;
}
ostream& Aves::print(ostream& o) const{
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
	string strHab;
	string strAme=(this-> ameacado ==0)?"Não":"Sim";
	if(this-> habitat==0){
		strHab="Nativo";
	}else if(this-> habitat==1){
		strHab="Exotico";
	}else{
		strHab="Domestico";
	}
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strHabVoo = (this-> habVoo == 0) ? "Ratita" : "Carenata";

	o<<"ID = " << this-> identificacao
		<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Habitat = "<< strHab 
		<<" | Ameaçado = "<< strAme
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Coloração = " << this -> coloracao
		<<" | Envergadura = "<< this-> envergadura<< "(m)"<< endl;
    return o;
}