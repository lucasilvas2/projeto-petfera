#include "reptil.hpp"

Reptil::Reptil(string identificacao, double preco, Habitat habitat, bool ameacado, double peso,
                string descricao, string cor, double comprimento)
                :Animais(identificacao, preco, habitat, ameacado, peso), descricao(descricao), cor(cor), comprimento(comprimento){}
Reptil::~Reptil(){}

string 
Reptil::getClasse() const{
    return this-> classe;
}
string Reptil::getDescricao() const{
    return this-> descricao;
}
string Reptil::getCor() const{
    return this-> cor;
}
double Reptil::getComprimento() const{
    return this-> comprimento;
}

void Reptil::setDescricao(string descricao){
    this-> descricao = descricao;
}
void Reptil::setCor(string cor){
    this-> cor = cor;
}
void Reptil::setComprimento(double comprimento){
    this-> comprimento = comprimento;
}

ostream& Reptil::print(ostream& o) const{
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
		strHab="nativo";
	}else if(this-> habitat==1){
		strHab="exotico";
	}else{
		strHab="domestico";
	}

	o<<"Preço = R$ "<< fixed << setprecision(2) << this-> preco <<" | Habitat = "<< strHab <<" | Ameacado ="<< strAme
				<<" | Veterinario = "<<strVet<<" | Tratador ="<<strTra << " | Peso = " << this -> peso <<"Kg" << " | Descricao = "<< 
                this-> descricao << " | Coloração = " << this -> cor << " | Comprimento = "<< this-> comprimento << "(m)"<< endl;
    return o;
}

//string identificacao, double preco, Habitat habitat, bool ameacado, double peso,
//string descricao, string cor, double comprimento