#ifndef ANIMAIS
#define ANIMAIS

#include <iomanip>
#include "tratador.hpp"
#include "veterinario.hpp"

using std::fixed;
using std::setprecision;

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
	Habitat habitat;
	bool ameacado;
	double peso;
	tipoSexo sexo;
	Tratador* tratador=nullptr;
	Veterinario* veterinario=nullptr;

public:
	Animais(string indetificacao, double preco, Habitat habitat, bool ameacado, double peso, tipoSexo sexo);
	virtual ~Animais();

	string getIdentificacao() const;
	double getPreco() const;
	bool getAmeacado() const;
	Habitat getHabitat() const;
	double getPeso() const;
	tipoSexo getSexo() const;
	Tratador* getTratador() const;
	Veterinario* getVeterinario() const;

	void setPreco(double preco);
	void setAmeacado(bool ameacado);
	void setHabitat(Habitat habitat);
	void setPeso(double peso);
	void setSexo(tipoSexo sexo);
	void setTratador(Tratador &tratador);
	void setVeterinario(Veterinario &veterinario);
		
	friend ostream& operator<<(ostream& o, Animais const &a);
private:
	virtual ostream& print(ostream&) const = 0;
};


#endif