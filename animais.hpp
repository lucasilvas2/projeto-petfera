#ifndef ANIMAIS
#define ANIMAIS

#include "tratador.hpp"
#include "veterinario.hpp"

enum Habitat{
	nativo,
	exotico,
	domestico
};

class Animais{
protected:
	string identificacao;
	double preco;
	Habitat habitat;
	bool ameacado;
	Tratador* tratador=nullptr;
	Veterinario* veterinario=nullptr;

public:
	Animais(string indetificacao, double preco, Habitat habitat, bool ameacado);
	Animais();

	string getIdentificacao() const;
	double getPreco() const;
	bool getAmeacado() const;
	Habitat getHabitat() const;
	Tratador* getTratador() const;
	Veterinario* getVeterinario() const;

	void setPreco(double preco);
	void setAmeacado(bool ameacado);
	void setHabitat(Habitat habitat);
	void setTratador(Tratador &tratador);
	void setVeterinario(Veterinario &veterinario);
		
	friend std::ostream& operator<<(std::ostream& o, Animais& a);
};


#endif