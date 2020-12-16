#include "ave_domestica.hpp"

/**
*@brief Construtor que instancia um objeto do tipo AveDomestica
*@param Caracteristicas inerentes as aves domésticas
*/
AveDomestica::AveDomestica(string identificacao, double preco, string descricao, double peso, tipoSexo sexo,HabilidadeVoo habVoo, 
                            double envergadura):Ave(identificacao, preco, descricao, peso, sexo, habVoo, envergadura){
								this-> tipoAnimal = aveDomestico;

/**
*@brief Destrutor da classe AveDomestica
*/							}
AveDomestica::~AveDomestica(){}

/**
*@brief Método que imprime os dados da ave doméstica
*@return atributos a serem impressos
*/
ostream& AveDomestica::print(ostream& o) const{
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

	//string strAme=(this-> ameacado ==0)?"Não":"Sim";
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strHabVoo = (this-> habVoo == 0) ? "Ratita" : "Carenata";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Envergadura = "<< this-> envergadura<< "(m)"
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
    return o;
}