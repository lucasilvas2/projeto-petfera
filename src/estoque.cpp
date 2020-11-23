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
	cout << "habitat 0(nativo),1(exotico) ou 2(domestico) ";
	cin>>opcaoHabitat;
	if(opcaoHabitat==0){
		habitat=nativo;
	}else if(opcaoHabitat==1){
		habitat=exotico;
	}else{
		habitat=domestico;
	}
	cout << "ameaçado 0(nao) ou 1(sim) ";
	cin >> ameacado;

	return adicionarAnimal(new Animais(preco,habitat,ameacado));
}

void Estoque::listarAnimais(){
	// for (auto& animal: this->estoque){
	// 	cout<<"Preco do animal =" << animal->getPreco() << endl <<"ameacado 0(nao) 1(sim) =" << animal->getAmeacado() << endl
	// 	<< animal -> getTratador() <<  animal-> getVeterinario()<<endl;
	// }

	for (auto& animal: this->estoque){
		cout<<*animal<<endl;
	}
}

void Estoque::teste(){
	Tratador* tratador_verde = new Tratador("Verde", verde);
	Tratador* tratador_azul = new Tratador("Azul", azul);
	Tratador* tratador_vermelho= new Tratador("vermelho", vermelho);

	Veterinario* lucas = new Veterinario("Lucas", "202589");
	Veterinario* fernando = new Veterinario("Fernando", "400548");

	Animais* cachorro = new Animais(100.00, domestico, 0);
	Animais* macaco = new Animais(500.00, nativo, 1);
	Animais* jaguar = new Animais(20000.00, exotico, 1);
	Animais* calopsita = new Animais(250.00, domestico, 1);

	adicionarAnimal(cachorro);
	adicionarAnimal(macaco);
	adicionarAnimal(jaguar);

	calopsita->setTratador(*tratador_verde);
	//cachorro->setTratador(*tratador_azul);
	macaco->setTratador(*tratador_azul);
	jaguar->setTratador(*tratador_vermelho);

	calopsita->setVeterinario(*lucas);
	cachorro->setVeterinario(*lucas);
	macaco->setVeterinario(*fernando);
	//jaguar->setVeterinario(*fernando);

	criarAnimal();
	listarAnimais();

}