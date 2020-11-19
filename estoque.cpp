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
	
	std::cout << "preco ";
	std::cin >> preco;
	std::cout << "habitat 0,1 ou 2 ";
	std::cin>>opcaoHabitat;
	if(opcaoHabitat==0){
		habitat=nativo;
	}else if(opcaoHabitat==1){
		habitat=exotico;
	}else{
		habitat=domestico;
	}
	std::cout << "ameaçado 0 ou 1 ";
	std::cin >> ameacado;

	return adicionarAnimal(new Animais(preco,habitat,ameacado));
}

void Estoque::listarAnimais(){
	for (auto& animal: this->estoque){
		std::cout<<"preco do animal ="<<animal->getPreco()<<std::endl;
		std::cout<<"ameacado 0(nao) 1(sim) ="<<animal->getAmeacado()<<std::endl;
	}
}