#include "reptil_nativo.hpp"

ReptilNativo::ReptilNativo(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string estado, bool ameacado, string licencaIBAMA)
                :Reptil( identificacao, preco, descricao, peso, sexo,veneno, comprimento), Nativo(estado, ameacado,licencaIBAMA){
					this-> tipoAnimal = reptilNativo;
				}
ReptilNativo::~ReptilNativo(){}

ostream& ReptilNativo::print(ostream& o) const{
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
	string strVeneno = (this-> veneno == 0) ? "Não" : "Sim";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< fixed << setprecision(2) << this-> preco 
		<<" | Ameaçado = "<< strAme
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Venenoso = " << strVeneno 
		<<" | Comprimento = "<< this-> comprimento << "(m)"
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA 
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra << endl;
    return o;
}