#include <iostream>
/*#include "tratador.hpp"
#include "veterinario.hpp"
#include "estoque.hpp"*/
#include "loja.hpp"


/**
*@brief Função que inicia o programa principal
*/
int main(int argc, char const *argv[])
{	
	/*shared_ptr<Tratador> lucas =make_shared <Tratador>("Lucas", "84 91111-1111", "Rua replantada", vermelho);
	shared_ptr<Veterinario> fernando = make_shared <Veterinario>("Fernando", "84 91111-1111", "Rua asfaltada", "89456-0");
	

	cout << (*lucas) << endl;
	cout << (*fernando) << endl;
	
	shared_ptr<Animal> largato = make_shared <ReptilNativo>("2020", 50, "Largato do brejo", 0.50, femea, sim, 100, "RN", 1, "056894");
	largato -> setTratador(lucas);
	largato -> setVeterinario(fernando);
	cout << (largato) << endl;

	shared_ptr <AveExotica> calopsita = make_shared <AveExotica>("3030", 45, "Calopsita viajada", 45, femea, ratitas, 45, "Alemanha");
	cout << (calopsita) << endl;*/
	
	
	/*Estoque teste;
	teste.adicionarAnimal(largato);
	teste.listarAnimais();

	teste.alterarAnimal(*largato);
	teste.listarAnimais();*/

	
	Loja testeLoja;

	FuncLoja testefuncionarios;
	Estoque testeEstoque;

	testeLoja.estoque=testeEstoque;
	testeLoja.funcionarios=testefuncionarios;

	testeLoja.menu();
	
	return 0;
}