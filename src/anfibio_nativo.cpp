#include "anfibio_nativo.hpp"

/**
*@brief Construtor que instancia um objeto do tipo AnfibioNativo
*@param Caracteristicas inerentes aos anfibios nativos 
*/
AnfibioNativo::AnfibioNativo(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venenosos tipoVen, string estado, bool ameacado,string licencaIBAMA)
                :Anfibio(identificacao, preco, descricao, peso, sexo, tipoVen), Nativo(estado, ameacado,licencaIBAMA){
					this-> tipoAnimal = anfibioNativo;
				}

/**
*@brief Destrutor da classe AnfibioNativo 
*/				
AnfibioNativo::~AnfibioNativo(){}

/**
*@brief Método que imprime os dados do anfibio nativo
*@return atributos a serem impressos
*/
ostream& AnfibioNativo::print(ostream& o) const{
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
	string strAme=(this-> ameacado ==0)?"Não":"Sim";
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Ameaçado = "<< strAme
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Periculosidade = "<< strTipoVen 
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
		return o;
}