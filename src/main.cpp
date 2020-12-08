#include <iostream>
#include "tratador.hpp"
#include "veterinario.hpp"
#include "estoque.hpp"


int main(int argc, char const *argv[])
{	
	Tratador* lucas = new Tratador("Lucas", "84 91111-1111", "Rua replantada", vermelho);
	Veterinario* fernando = new Veterinario("Fernando", "84 91111-1111", "Rua asfaltada", "89456-0");
	

	cout << (*lucas) << endl;
	cout << (*fernando) << endl;
	
	ReptilNativo* largato = new ReptilNativo("2020", 50, "Largato do brejo", 0.50, femea, sim, 100, "RN", 1, "056894");
	largato -> setTratador(*lucas);
	largato -> setVeterinario(*fernando);
	cout << ((Reptil) *largato) << endl;
	cout << (*largato) << endl;

	AveExotica* calopsita = new AveExotica("3030", 45, "Calopsita viajada", 45, femea, ratitas, 45, "Alemanha");
	cout << (*calopsita) << endl;
	
	Estoque teste;
	teste.adicionarAnimal(largato);
	teste.listarAnimais();

	teste.alterarAnimal(*largato);
	teste.listarAnimais();

	
	/*Loja testeLoja;

	FuncLoja testefuncionarios;
	Estoque testeEstoque;

	testeLoja.estoque=testeEstoque;
	testeLoja.funcionarios=testefuncionarios;

	testeLoja.menu();*/
	
	return 0;
}