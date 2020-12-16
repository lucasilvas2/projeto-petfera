#include "ave_nativa.hpp"

/**
*@brief Construtor que instancia um objeto do tipo AveNativa
*@param Caracteristicas inerentes as aves nativas 
*/
AveNativa::AveNativa(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, HabilidadeVoo habVoo, double envergadura, string estado, bool ameacado,string licencaIBAMA):
                Ave(identificacao, preco, descricao, peso, sexo, habVoo, envergadura), Nativo(estado, ameacado,licencaIBAMA){
					this-> tipoAnimal = aveNativo;
				}

/**
*@brief Destrutor da classe AveNativa
*/
AveNativa::~AveNativa(){}

/**
*@brief Método que imprime os dados da ave nativa
*@return atributos a serem impressos
*/
ostream& AveNativa::print(ostream& o) const{
    string strVet;
	if(getVeterinario()==nullptr){
		strVet="Sem veterinario";
	}else{
		strVet=getVeterinario()->getNome();
	}
	string strTra;
	if(getTratador()==nullptr){
		strTra="Sem tratador";
	}else{
		strTra=getTratador()->getNome();
	}

	string strAme=(this-> ameacado ==0)?"Não":"Sim";
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strHabVoo = (this-> habVoo == 0) ? "Ratita" : "Carenata";

	o<<"ID = " << this-> identificacao
		//<<" | Classe = " << this-> classe 
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Ameaçado = "<< strAme
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Habilidade de Voo = " << strHabVoo
		<<" | Envergadura = "<< this-> envergadura<< "(m)"
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
		
    return o;
}