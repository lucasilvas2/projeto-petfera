#include "reptil.hpp"
#include <iomanip>

Reptil::Reptil(string identificacao, double preco, string descricao, 
        double peso, tipoSexo sexo , Venomous veneno, double comprimento)
                :Animal(identificacao, preco, descricao, peso, sexo), 
				veneno(veneno), comprimento(comprimento){}
Reptil::~Reptil(){}

Venomous Reptil::getVeneno() const{
	return this-> veneno;
}

double Reptil::getComprimento() const{
    return this-> comprimento;
}

void Reptil::setVeneno(Venomous veneno){
	this-> veneno = veneno;
}

void Reptil::setComprimento(double comprimento){
    this-> comprimento = comprimento;
}

ostream& Reptil::print(ostream& o) const{
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
	string strAme=(this-> ameacado ==0)?"Não":"Sim";
	string strHab;
	
	if(this-> habitat==0){
		strHab="Nativo";
	}else if(this-> habitat==1){
		strHab="Exotico";
	}else{
		strHab="Domestico";
	}*/
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strVeneno = (this-> veneno == 0) ? "Não" : "Sim";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Venenoso = " << strVeneno 
		<<" | Comprimento = "<< this-> comprimento << "(m)"<< endl;
    return o;
}