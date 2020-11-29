#include "anfibio_nativo.hpp"

AnfibioNativo::AnfibioNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen, string estado, string licencaIBAMA)
                :Anfibio(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, tipoVen), Nativo(estado, licencaIBAMA){}
AnfibioNativo::~AnfibioNativo(){}

ostream& AnfibioNativo::print(ostream& o) const{
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
	
	string strSexo = (this-> sexo == 0) ? "Macho" : "Fêmea";
	string strTipoVen = (this-> tipoVen == 0) ? "Não Venenoso" : "Venenoso";

	o<<"ID = " << this-> identificacao
		<<" | Preço = R$ "<< std::fixed << std::setprecision(2) << this-> preco 
		<<" | Ameaçado = "<< strAme
		<<" | Veterinario = "<<strVet
		<<" | Tratador = "<<strTra 
		<<" | Peso = " << this -> peso <<"Kg"
		<<" | Sexo = " << strSexo 
		<<" | Descricao = " << this-> descricao
		<<" | Coloração = " << this -> coloracao
		<<" | Periculosidade = "<< strTipoVen 
        <<" | Estado de origem = " << this-> estado
        <<" | Licença IBAMA = " << this -> licencaIBAMA << endl;
}