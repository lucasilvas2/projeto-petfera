#include <iostream>

#include "reptil.hpp"
#include "aves.hpp"
#include "anfibios.hpp"
#include "mamiferos.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "funcloja.hpp"
#include "estoque.hpp"

int main(int argc, char const *argv[])
{
	/*Estoque petfera;
	petfera.teste();*/

	Tratador* lucas = new Tratador("Lucas", "84 91111-1111", "Rua replantada", vermelho);
	Veterinario* fernando = new Veterinario("Fernando", "84 91111-1111", "Rua asfaltada", "89456-0");
	

	cout << (*lucas) << endl;
	cout << (*fernando) << endl;
	
	Reptil* largato = new Reptil("2020", 200.00, "Largato do brejo", "Rosa com pintas rosas", nativo, 1, 0.50,macho, sim, 3 );
	largato -> setTratador(*lucas);
	largato -> setVeterinario(*fernando);
	cout << (*largato) << endl;

	Aves* calopsita = new Aves("3030", 100.15, "Calopsita berradeira", "Laranja", domestico, 0, 0.45, femea, carenatas, 0.89);
	cout << (*calopsita) << endl;
	
	Anfibios* sapo = new Anfibios("4040", 50.1 ,"Sapo cururu", "preto", nativo, 0, 0.30, femea , naoVenenoso);
	cout << (*sapo) << endl;

	Mamiferos* cachorro = new Mamiferos("5050", 123.50 ,"Pastor Alemao", "Marrom", domestico, 0, 20.00,macho , Carnivoro);
	cout << (*cachorro) << endl;
	
	
	FuncLoja testefuncionarios;
	testefuncionarios.criarFunc();
	testefuncionarios.criarFunc();
	testefuncionarios.criarFunc();
	testefuncionarios.listarFunc();
	testefuncionarios.encontrarFunc("joao");
	testefuncionarios.removerFunc("ana");
	testefuncionarios.listarFunc();

	Estoque testeEstoque;
	testeEstoque.adicionarAnimal(largato);
	testeEstoque.adicionarAnimal(calopsita);
	testeEstoque.adicionarAnimal(sapo);
	testeEstoque.adicionarAnimal(cachorro);
	testeEstoque.listarAnimais();
	testeEstoque.encontrarAnimal("3030");
	testeEstoque.removerAnimal("4040");
	testeEstoque.listarAnimais();
	testeEstoque.criarAnimal();
	testeEstoque.listarAnimais();

	return 0;
}