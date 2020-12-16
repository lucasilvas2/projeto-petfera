#include "anfibio_exotico.hpp"

/**
*@brief Construtor que instancia um objeto do tipo AnfibioExotico
*@param Caracteristicas inerentes aos anfibios exoticos 
*/
AnfibioExotico::AnfibioExotico(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venenosos tipoVen,string origem)
                :Anfibio(identificacao, preco, descricao, peso, sexo, tipoVen),Exotico(origem){
					this-> tipoAnimal = anfibioExotico;
				}

/**
*@brief Destrutor da classe AnfibioExotico 
*/				
AnfibioExotico::~AnfibioExotico(){}

/**
*@brief Método que imprime os dados do anfibio exotico
*@return atributos a serem impressos
*/
ostream& AnfibioExotico::print(ostream& o) const{
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
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Periculosidade = "<< strTipoVen 
        <<" | Origem = " << this-> origem 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
	return o;
}