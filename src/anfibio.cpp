#include "anfibio.hpp"
#include <iomanip>

/**
*@brief Construtor que instancia um objeto do tipo Anfibio
*@param Caracteristicas inerentes aos anfibios
*@return 
*/
Anfibio::Anfibio(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venenosos tipoVen)
                :Animal(identificacao, preco, descricao, peso, sexo), tipoVen(tipoVen){}

/**
*@brief Destrutor da classe Anfibio 
*/
Anfibio::~Anfibio(){}

/**
*@brief Método que retorna se o anfibio é venenoso ou não
*@return venenoso ou não venenoso
*/
Venenosos Anfibio::getVenenoso() const{
	return this->tipoVen; 
}

/**
*@brief Método que atribui venenoso ou não venenoso ao anfibio
*@param tipoVen venenoso ou não venenoso
*/
void Anfibio::setVenenoso(Venenosos tipoVen){
	this->tipoVen=tipoVen;
}

/**
*@brief Método que imprime os dados do anfibio
*@return atributos a serem impressos
*/
/*ostream& Anfibio::print(ostream& o) const{
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
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

	o<<"ID = " << this-> identificacao
		//<<" | Classe = Anfíbio" <<
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		//<<" | Veterinario = "<<strVet
		//<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Periculosidade = "<< strTipoVen << endl;
    return o;
}
*/