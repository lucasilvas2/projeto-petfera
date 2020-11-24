#include "estoque.hpp"
#include "animais.hpp"
#include "aves.hpp"
#include "anfibios.hpp"
#include "mamiferos.hpp"
//#include "reptil.hpp"

#include <iostream>

bool Estoque::adicionarAnimal(Animais* animal){
	this->estoque.push_back(animal);
	return true;
}

// bool Estoque::criarAnimal(){
// 	double preco;
// 	int opcaoHabitat;
// 	bool ameacado;
// 	Habitat habitat;
	
// 	cout << "preco ";
// 	cin >> preco;
// 	cout << "habitat 0(nativo),1(exotico) ou 2(domestico) ";
// 	cin>>opcaoHabitat;
// 	if(opcaoHabitat==0){
// 		habitat=nativo;
// 	}else if(opcaoHabitat==1){
// 		habitat=exotico;
// 	}else{
// 		habitat=domestico;
// 	}
// 	cout << "ameaçado 0(nao) ou 1(sim) ";
// 	cin >> ameacado;

// 	return adicionarAnimal(new Animais(preco,habitat,ameacado));
// }

void Estoque::listarAnimais(){
	for (auto& animal: this->estoque){
		cout<<*animal<<endl;
	}
}

Animais* Estoque::encontrarAnimal(string identificacao){
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			cout<<"encontrado: "<<*animal<<endl;
			return animal;
		}
	}
	cout << "nao encontrado" << endl;
	return nullptr;
}

Animais* Estoque::removerAnimal(string identificacao){
	int index=0;
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			Animais* removido=animal;
			cout<<"removido animal: "<<*animal<<endl;
			this->estoque.erase(this->estoque.begin()+index);
			return removido;
		}
		index++;
	}
	return nullptr;
}

bool Estoque::criarAnimal(){
	int opcao;
	string identificacao;
	double preco;
	string descricao;
	string coloracao;
	int opcHab;
	Habitat habitat;
	bool ameacado;
	double peso;
	int opcSexo;
	tipoSexo sexo;
	cout << "(1-Anfibio) | (2-Reptil) | (3-Ave) | (4-Mamifero) ";
	cin >> opcao;
	cout << "Identificacao: ";
	cin >> identificacao;
	cout << "Preco: ";
	cin >> preco;
	cout << "Descricao: ";
	cin >> descricao;
	cout << "Coloracao: ";
	cin >> coloracao;
	cout << "Habitat (0-nativo),(1-exotico) ou (2-domestico) ";
	cin >> opcHab;
	if(opcHab==0){
		habitat=nativo;
	}else if(opcHab==1){

		habitat=exotico;
	}else{
		habitat=domestico;
	}
	cout << "ameaçado 0(nao) ou 1(sim) ";
	cin >> ameacado;
	cout << "Peso: ";
	cin >> peso;
	cout << "(0-Macho) ou (1-Femea)";
	cin >> opcSexo;
	if(opcSexo==0){
		sexo=macho;
	}else{
		sexo=femea;
	}
	switch(opcao){
		case 1:
			Venenosos venenoso;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso)";
			cin >> opcVen;
			if(opcVen==0){
				venenoso=naoVenenoso;
			}else{
				venenoso=Venenoso;
			}
			
			return adicionarAnimal(new Anfibios(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,venenoso));
		/*
		case 2:
			Venenoso veneno;
			int opcVen;
			double comprimento;
			cout << "(0-Nao Venenoso) ou (1-Venenoso)";
			cin >> opcVen;
			if(opcVen==0){
				veneno=nao;
			}else{
				veneno=sim;
			}
			cout << "Comprimento: ";
			cin >> comprimento;
		 	return adicionarAnimal(new Reptil(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,veneno,comprimento));
		*/
		case 3:
			HabilidadeVoo habVoo;
			int opcVoo;
			double envergadura;
			cout << "(0-Ratita) ou (1-Carenata)";
			cin >> opcVoo;
			if(opcVoo==0){
				habVoo=ratitas;
			}else{
				habVoo=carenatas;
			}
			cout <<"Envergadura: ";
			cin >> envergadura;
		 	return adicionarAnimal(new Aves(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,habVoo,envergadura));
		
		case 4:
			Alimentacao alimentacao;
			int opcAlim;
			cout << "(0-Carnivoro), (1-Herbivoro) ou (2-Onivoro)";
			cin >> opcAlim;
			if(opcAlim==0){
				alimentacao=Carnivoro;
			}else if(opcAlim==1){
				alimentacao=Herbivoro;
			}else{
				alimentacao=Onivoro;
			}
		 	return adicionarAnimal(new Mamiferos(identificacao,preco,descricao,
							coloracao,habitat,ameacado,peso,sexo,alimentacao));
		
		default:
			break;
	}
	return 0;
}


// void Estoque::teste(){
// 	Tratador* tratador_verde = new Tratador("Verde", verde);
// 	Tratador* tratador_azul = new Tratador("Azul", azul);
// 	Tratador* tratador_vermelho= new Tratador("vermelho", vermelho);

// 	Veterinario* lucas = new Veterinario("Lucas", "202589");
// 	Veterinario* fernando = new Veterinario("Fernando", "400548");

// 	Animais* cachorro = new Animais(100.00, domestico, 0);
// 	Animais* macaco = new Animais(500.00, nativo, 1);
// 	Animais* jaguar = new Animais(20000.00, exotico, 1);
// 	Animais* calopsita = new Animais(250.00, domestico, 1);

// 	adicionarAnimal(cachorro);
// 	adicionarAnimal(macaco);
// 	adicionarAnimal(jaguar);

// 	calopsita->setTratador(*tratador_verde);
// 	//cachorro->setTratador(*tratador_azul);
// 	macaco->setTratador(*tratador_azul);
// 	jaguar->setTratador(*tratador_vermelho);

// 	calopsita->setVeterinario(*lucas);
// 	cachorro->setVeterinario(*lucas);
// 	macaco->setVeterinario(*fernando);
// 	//jaguar->setVeterinario(*fernando);

// 	criarAnimal();
// 	listarAnimais();

// }
