#ifndef ANIMAIS
#define ANIMAIS

#include <iomanip>
#include "tratador.hpp"
#include "veterinario.hpp"

using std::fixed;
using std::setprecision;

enum tipoSexo{
	macho,
	femea
};

class Animal{
protected:
	string identificacao;
	double preco;
	string descricao;
	double peso;
	tipoSexo sexo;
	//Tratador* tratador=nullptr;
	//Veterinario* veterinario=nullptr;

public:
	Animal(string identificacao, double preco, string descricao,
			double peso, tipoSexo sexo);
	virtual ~Animal();

	string getIdentificacao() const;
	double getPreco() const;
	string getDescricao() const;
	double getPeso() const;
	tipoSexo getSexo() const;
	//Tratador* getTratador() const;
	//Veterinario* getVeterinario() const;

	void setIdentificacao(string identificacao);
	void setPreco(double preco);
	void setDescricao(string descricao);
	void setPeso(double peso);
	void setSexo(tipoSexo sexo);
	//void setTratador(Tratador &tratador);
	//void setVeterinario(Veterinario &veterinario);
		
	friend ostream& operator<<(ostream& o, Animal const &a);
private:
	virtual ostream& print(ostream&) const = 0;
};


#endif