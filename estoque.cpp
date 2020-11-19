#include "estoque.hpp"
#include <iostream>

bool Estoque::adicionarAnimal(Animais* animal){
	this->estoque.push_back(animal);
	return true;
}

bool Estoque::criarAnimal(){
	double preco;
	int opcaoHabitat;
	bool ameacado;
	Habitat habitat;
	
	cout << "preco ";
	cin >> preco;
	cout << "habitat 0,1 ou 2 ";
	cin>>opcaoHabitat;
	if(opcaoHabitat==0){
		habitat=nativo;
	}else if(opcaoHabitat==1){
		habitat=exotico;
	}else{
		habitat=domestico;
	}
	cout << "ameaçado 0 ou 1 ";
	cin >> ameacado;

	return adicionarAnimal(new Animais(preco,habitat,ameacado));
}

void Estoque::listarAnimais(){
	for (auto& animal: this->estoque){
		cout<<"preco do animal =" << animal->getPreco() << std::endl;
		cout<<"ameacado 0(nao) 1(sim) =" << animal->getAmeacado() << std::endl;
	}
}

void teste(){
	Tratador* verde = new Tratador("Verde", verde);
	Tratador* azul = new Tratador("Azul", azul);
	Tratador* vermelho= new Tratador("vermelho", vermelho);

	Veterinario* lucas = new Veterinario("Lucas", "202589");
	Veterinario* fernando = new Veterinario("Fernando", "400548");

	Animais* cachorro = new Animais(100.00, domestico, 0);
	Animais* macaco = new Animais(500.00, nativo, 1);
	Animais* jaguar = new Animais(20000.00, exotico, 1);

	adicionarAnimal(cachorro);
	adicionarAnimal(macaco);
	adicionarAnimal(jaguar);

	cachorro->setTratador(*azul);
	macaco->setTratador(*azul);
	jaguar->setTratador(*vermelho);

	cachorro->setVeterinario(*lucas);
	macaco->setVeterinario(*fernando);
	jaguar->setVeterinario(*fernando);

	listarAnimais();

}