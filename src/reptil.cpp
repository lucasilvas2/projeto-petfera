#include "reptil.hpp"
#include <iomanip>

/**
*@brief Construtor que instancia um objeto do tipo Reptil
*@param Caracteristicas inerentes aos repteis
*/
Reptil::Reptil(string identificacao, double preco, string descricao, 
        double peso, tipoSexo sexo , Venomous veneno, double comprimento)
                :Animal(identificacao, preco, descricao, peso, sexo), 
				veneno(veneno), comprimento(comprimento){}

/**
*@brief Destrutor da classe Reptil
*/
Reptil::~Reptil(){}

/**
*@brief Método que retorna se o reptil é venenoso ou não venenoso
*@return veneno venenoso ou não venenoso
*/
Venomous Reptil::getVeneno() const{
	return this-> veneno;
}

/**
*@brief Método que retorna o comprimento do reptil
*@return comprimento do reptil
*/
double Reptil::getComprimento() const{
    return this-> comprimento;
}

/**
*@brief Método que atribui ao reptil se ele é venenoso ou não venenoso
*@param veneno venenoso ou não venenoso
*/
void Reptil::setVeneno(Venomous veneno){
	this-> veneno = veneno;
}

/**
*@brief Método que atribui um comprimento ao reptil
*@param comprimento do reptil
*/
void Reptil::setComprimento(double comprimento){
    this-> comprimento = comprimento;
}

/**
*@brief método que imprime os dados do reptil
*@return atributos a serem impressos
*/
/*ostream& Reptil::print(ostream& o) const{
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
	string strHab;
	
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
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Venenoso = " << strVeneno 
		<<" | Comprimento = "<< this-> comprimento << "(m)"<< endl;
    return o;
}*/