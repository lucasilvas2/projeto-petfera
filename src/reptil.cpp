#include "reptil.hpp"
#include <iomanip>

/**
*@brief Construtor da classe Reptil
*@param Caracteristicas inerentes aos répteis
*/
Reptil::Reptil(string identificacao, double preco, string descricao, string coloracao,Habitat habitat, 
        bool ameacado, double peso, tipoSexo sexo , Venomous veneno, double comprimento)
                :Animais(identificacao, preco, descricao, coloracao, habitat, ameacado, peso, sexo), 
				veneno(veneno), comprimento(comprimento){}
Reptil::~Reptil(){}

/**
*@brief retorna a classe que o animal pertence
*/
string 
Reptil::getClasse() const{
    return this-> classe;
}

/**
*@brief Retorna se o reptil é venenoso ou não venenoso
*/
Venomous Reptil::getVeneno() const{
	return this-> veneno;
}

/**
*@brief Retorna o comprimento do reptil
*/
double Reptil::getComprimento() const{
    return this-> comprimento;
}

/**
*@brief Atribui ao reptil venenoso ou não venenoso
*@param veneno venenoso ou não venenoso
*/
void Reptil::setVeneno(Venomous veneno){
	this-> veneno = veneno;
}

/**
*@brief Atribui comprimento ao reptil
*@param comprimento do reptil
*/
void Reptil::setComprimento(double comprimento){
    this-> comprimento = comprimento;
}

/**
*@brief Imprime caracteristicas do reptil
*@return atributos a serem impressos
*/
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
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
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