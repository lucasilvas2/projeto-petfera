#ifndef ESTOQUE
#define ESTOQUE

#include "animal.hpp"
#include "reptil_nativo.hpp"
#include "reptil_exotico.hpp"
#include "reptil_domestico.hpp"

#include "ave_nativa.hpp"
#include "ave_exotica.hpp"
#include "ave_domestica.hpp"

#include "anfibio_nativo.hpp"
#include "anfibio_domestico.hpp"
#include "anfibio_exotico.hpp"

#include "mamifero_nativo.hpp"
#include "mamifero_exotico.hpp"
#include "mamifero_domestico.hpp"

#include "tratador.hpp"
#include "veterinario.hpp"
#include "funcloja.hpp"

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

class Estoque{
private:
	vector<Animal*> estoque;
	void limparTelaEstoque();
	
public:
	bool criarAnimal();
	bool adicionarAnimal(Animal* animal);
	Animal* encontrarAnimal(string identificacao);
	void listarAnimais();
	Animal* removerAnimal(string identificacao);
	void menu();
};

#endif