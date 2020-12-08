#ifndef ANIMAIS
#define ANIMAIS

#include <iomanip>
#include <memory>
#include "tratador.hpp"
#include "veterinario.hpp"


using std::fixed;
using std::setprecision;
using std::shared_ptr;
using std::make_shared;
using std::dynamic_pointer_cast;

enum tpAnimal{
	reptilDomestico,
	reptilExotico,
	reptilNativo,
	aveDomestico,
	aveExotico,
	aveNativo,
	mamiferoDomestico,
	mamiferoExotico,
	mamiferoNativo,
	anfibioDomestico,
	anfibioExotico,
	anfibioNativo		
};
enum tipoSexo{
	macho,
	femea
};

class Animal{
protected:
	tpAnimal tipoAnimal;
	string identificacao;
	double preco;
	string descricao;
	double peso;
	tipoSexo sexo;
	shared_ptr <Tratador> tratador=nullptr;
	shared_ptr <Veterinario> veterinario=nullptr;

public:
	Animal();
	Animal(string identificacao, double preco, string descricao,
			double peso, tipoSexo sexo);
	virtual ~Animal();

	tpAnimal getTipoAnimal() const;
	string getIdentificacao() const;
	double getPreco() const;
	string getDescricao() const;
	double getPeso() const;
	tipoSexo getSexo() const;
	shared_ptr<Tratador> getTratador() const;
	shared_ptr<Veterinario> getVeterinario() const;

	void setTipoAnimal(tpAnimal tipoAnimal);
	void setIdentificacao(string identificacao);
	void setPreco(double preco);
	void setDescricao(string descricao);
	void setPeso(double peso);
	void setSexo(tipoSexo sexo);
	void setTratador( shared_ptr<Tratador> tratador);
	void setVeterinario(shared_ptr<Veterinario> veterinario);
		
	friend ostream& operator<<(ostream& o, shared_ptr<Animal> const a);
private:
	virtual ostream& print(ostream&) const = 0;
};


#endif