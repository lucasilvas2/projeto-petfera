#include "nativo.hpp"

/**
*@brief Construtor que instancia um objeto do tipo Nativo
*@param Caracteristicas inerentes aos nativos
*/
Nativo::Nativo(string estado, bool ameacado, string licencaIBAMA):estado(estado), ameacado(ameacado),licencaIBAMA(licencaIBAMA){}

/**
*@brief Destrutor da classe Nativo
*/
Nativo::~Nativo(){}

/**
*@brief Método que retorna o estado (unidade da federação) do animal nativo
*@return estado do animal nativo
*/
string 
Nativo::getEstado() const{
    return this-> estado;
}

/**
*@brief Método que retorna a licenca do IBAMA
*@return licencaIBAMA
*/
string 
Nativo::getLicencaIBAMA() const{
    return this-> licencaIBAMA;
}

/**
*@brief Método que retorna se o animal é ameaçado ou não de extinção
*@return ameacado ou não ameacado
*/
bool 
Nativo::getAmeacado() const{
    return this-> ameacado;
}

/*Tratador* 
Nativo::getTratador() const{
	return this->tratador;
}

Veterinario* 
Nativo::getVeterinario() const{
	return this-> veterinario;
}*/

/**
*@brief Atribui o estado (unidade da federação) do animal nativo
*@return estado do animal nativo
*/
void 
Nativo::setEstado(string estado){
    this -> estado = estado;
}

/**
*@brief Atribui o numero da licença do IBAMA ao animal nativo
*@return licencaIBAMA
*/
void 
Nativo::setLicencaIBAMA(string licencaIBAMA){
    this-> licencaIBAMA = licencaIBAMA;
}

/**
*@brief Método que atribui ao animal se ele é ameaçado ou não de extinção
*@return ameacado ou não ameacado
*/
void 
Nativo::setAmeacado(bool ameacado){
    this->ameacado = ameacado;
}

/*void 
Nativo::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

void 
Nativo::setVeterinario(Veterinario &veterinario){
	this-> veterinario = &veterinario;
}*/