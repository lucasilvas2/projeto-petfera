#include "reptil.hpp"

Reptil::Reptil(string id, double preco, string descricao, string coloracao,Habitat habitat, 
        bool ameacado, double peso, tipoSexo sexo , Venenoso veneno, double comprimento)
                :Animais(id, preco, descricao, coloracao, habitat, ameacado, peso, sexo), 
				veneno(veneno), comprimento(comprimento){}
Reptil::~Reptil(){}

string 
Reptil::getClasse() const{
    return this-> classe;
}

Venenoso Reptil::getVeneno() const{
	return this-> veneno;
}

double Reptil::getComprimento() const{
    return this-> comprimento;
}

void Reptil::setVeneno(Venenoso veneno){
	this-> veneno = veneno;
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
		strHab="Nativo";
	}else if(this-> habitat==1){
		strHab="Exotico";
	}else{
		strHab="Domestico";
	}
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strVeneno = (this-> veneno == 0) ? "Não" : "Sim";

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
		<<" | Venenoso = " << strVeneno 
		<<" | Coloração = " << this -> coloracao
		<<" | Comprimento = "<< this-> comprimento << "(m)"<< endl;
    return o;
}

//string identificacao, double preco, Habitat habitat, bool ameacado, double peso,
//string descricao, string cor, double comprimento