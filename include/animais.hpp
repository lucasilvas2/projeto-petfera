#ifndef ANIMAIS
#define ANIMAIS

#include <iomanip>
#include "tratador.hpp"
#include "veterinario.hpp"
#include "profissional.hpp"

enum Habitat{
	nativo,
	exotico,
	domestico
};

enum tipoSexo{
	macho,
	femea
};

class Animais{
protected:
	string identificacao;
	double preco;
	string descricao;
	string coloracao;
	Habitat habitat;
	bool ameacado;
	double peso;
	tipoSexo sexo;
	Tratador* tratador=nullptr;
	Veterinario* veterinario=nullptr;
	Profissional* profissional=nullptr;

public:
	Animais(string identificacao, double preco, string descricao,
			 string coloracao, Habitat habitat, bool ameacado, double peso, tipoSexo sexo);
	virtual ~Animais();

	string getIdentificacao() const;
	double getPreco() const;
	string getDescricao() const;
	string getColoracao() const;
	bool getAmeacado() const;
	Habitat getHabitat() const;
	double getPeso() const;
	tipoSexo getSexo() const;
	Tratador* getTratador() const;
	Veterinario* getVeterinario() const;
	

	void setIdentificacao(string identificacao);
	void setPreco(double preco);
	void setDescricao(string descricao);
	void setColocaracao(string coloracao);
	void setAmeacado(bool ameacado);
	void setHabitat(Habitat habitat);
	void setPeso(double peso);
	void setSexo(tipoSexo sexo);
	void setTratador(Tratador &tratador);
	void setVeterinario(Veterinario &veterinario);
	void setProfissional(Profissional &profissional);
	
		
	friend ostream& operator<<(ostream& o, Animais const &a);
private:
	virtual ostream& print(ostream&) const = 0;
};


#endif
