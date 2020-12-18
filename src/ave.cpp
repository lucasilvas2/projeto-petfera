#include "ave.hpp"
#include <iomanip>

/**
*@brief Construtor que instancia um objeto do tipo Ave
*@param Caracteristicas inerentes as aves
*/
Ave::Ave(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura)
                :Animal(identificacao, preco, descricao, peso, sexo), habVoo(habVoo),
                envergadura(envergadura){}

/**
*@brief Destrutor da classe Ave 
*/
Ave::~Ave(){}

/**
*@brief Método que retorna se a ave é ratita ou carenata
*@return habVoo ratita ou carenata
*/
HabilidadeVoo Ave::getHabilidadeVoo() const{
    return this-> habVoo;
}

/**
*@brief Método que retorna a envergadura da ave
*@return envergadura da ave
*/
double Ave::getEnvergadura() const{
    return this-> envergadura;
}

/**
*@brief Método que atribui a ave a caracteristica ratita ou carenata
*@param habVoo ratita ou carenata
*/
void Ave::setHabilidadeVoo(HabilidadeVoo habVoo){
    this-> habVoo = habVoo;
}

/**
*@brief Método que atribui a envergadura da ave
*@param envergadura da ave
*/
void Ave::setEnvergadura(double envergadura){
    this-> envergadura = envergadura;
}

/**
*@brief Método que imprime os dados da ave
*@return atributos a serem impressos
*/
/*ostream& Ave::print(ostream& o) const{
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

	string strHab;
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
		//<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		//<<" | Veterinario = "<<strVet
		//<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Envergadura = "<< this-> envergadura<< "(m)"<< endl;
    return o;
}*/