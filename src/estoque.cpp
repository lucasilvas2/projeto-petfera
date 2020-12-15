#include "estoque.hpp"
#include "animal.hpp"
#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::stringstream;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;
using std::ios;
using std::vector;
using std::fixed;
using std::setprecision;
using std::ostream;
using std::istream;

bool Estoque::adicionarAnimal(shared_ptr<Animal> novoAnimal){
	this->estoque.push_back(novoAnimal);
	return true;
}

void Estoque::listarAnimais(){
	for (auto& animal: this->estoque){
		cout<< animal<<endl;
	}
}

shared_ptr<Animal> Estoque::encontrarAnimal(string identificacao){
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			cout<<"encontrado: "<<animal<<endl;
			return animal;
		}
	}
	cout << "nao encontrado" << endl;
	return nullptr;
}

shared_ptr<Animal> Estoque::removerAnimal(string identificacao){
	int index=0;
	for(auto& animal: this->estoque){
		if(animal->getIdentificacao()==identificacao){
			shared_ptr<Animal> removido=animal;
			cout<<"removido animal: "<<animal<<endl;
			this->estoque.erase(this->estoque.begin()+index);
			return removido;
		}
		index++;
	}
	return nullptr;
}

bool Estoque::criarAnimal(){
	int opcao;
	int opcHab;
	string identificacao;
	double preco;
	string descricao;
	double peso;
	int opcSexo;
	tipoSexo sexo;
	bool ameacado;

	string linha;
	getline(cin, linha);

	cout << "Descricao: ";
	getline(cin,descricao);
	cout << "Identificacao: ";
	getline(cin, identificacao);
	cout << "(1-Anfibio) | (2-Reptil) | (3-Ave) | (4-Mamifero): ";
	cin >> opcao;
	cout << "Habitat (0 - Nativo), (1 - Exotico) ou (2 - Domestico): ";
	cin >> opcHab;	
	cout << "Peso: ";
	cin >> peso;
	cout << "(0 - Macho) ou (1 - Femea): ";
	cin >> opcSexo;
	if(opcSexo==0){
		sexo=macho;
	}else{
		sexo=femea;
	}
	cout << "Preco: ";
	cin >> preco;

	if (opcao == 1){ //Anfibio
		if(opcHab == 0){//Nativo
			Venenosos veneno;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso) ";
			cin >> opcVen;
			if(opcVen==0){
				veneno=naoVenenoso;
			}else{
				veneno=Venenoso;
			}
			string estado;
			cout << "Estado UF: ";
			cin >> estado;
			cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
			cin >> ameacado;
			string licencaIBAMA;
			cout << "Licença para transporte IBAMA: ";
			cin >> licencaIBAMA;
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AnfibioNativo>(identificacao, preco, descricao,peso, sexo,veneno, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){ //exotico
			Venenosos veneno;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso) ";
			cin >> opcVen;
			if(opcVen==0){
				veneno=naoVenenoso;
			}else{
				veneno=Venenoso;
			}
			string origem;
			cin.ignore();
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AnfibioExotico>(identificacao, preco, descricao,peso, sexo,veneno,origem));
		}
		else if (opcHab == 2) //domestico
		{
			Venenosos veneno;
			int opcVen;
			cout << "(0-Nao Venenoso) ou (1-Venenoso) ";
			cin >> opcVen;
			if(opcVen==0){
				veneno=naoVenenoso;
			}else{
				veneno=Venenoso;
			}
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AnfibioDomestico>(identificacao, preco, descricao,peso, sexo,veneno));
		}
		else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}

		
	}
	else if(opcao == 2){ //reptil
		Venomous veneno;
		int opcVene;
		double comprimento;
		cout << "(0-Nao Venenoso) ou (1-Venenoso)";
		cin >> opcVene;
		if(opcVene==0){
			veneno=nao;
		}else{
			veneno=sim;
		}
		cout << "Comprimento: ";
		cin >> comprimento;
		if(opcHab == 0){
			
			string estado;
			cout << "Estado UF: ";
			cin >> estado;
			cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
			cin >> ameacado;
			string licencaIBAMA;
			cout << "Licença para transporte IBAMA: ";
			cin >> licencaIBAMA;
			limparTelaEstoque();
			return adicionarAnimal(make_shared <ReptilNativo>(identificacao, preco, descricao, peso, sexo, veneno, comprimento, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){
			
			string origem;
			cin.ignore();
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(make_shared <ReptilExotico>(identificacao, preco, descricao, peso, sexo, veneno, comprimento, origem));
		}
		else if(opcHab == 2){
			limparTelaEstoque();
			return adicionarAnimal(make_shared <ReptilDomestico>(identificacao, preco, descricao, peso, sexo, veneno, comprimento));
		}
		else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}


	}
	else if(opcao ==3){//ave
		HabilidadeVoo habVoo;
		int opcVoo;
		double envergadura;
		cout << "(0 - Ratita) ou (1 - Carenata)";
		cin >> opcVoo;
		if(opcVoo==0){
			habVoo=ratitas;
		}else{
			habVoo=carenatas;
		}
		cout <<"Envergadura: ";
		cin >> envergadura;
		if(opcHab == 0){
			
			string estado;
			cout << "Estado UF: ";
			cin >> estado;
			cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
			cin >> ameacado;
			string licencaIBAMA;
			cout << "Licença para transporte IBAMA: ";
			cin >> licencaIBAMA;
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AveNativa>(identificacao, preco, descricao, peso,sexo, habVoo, envergadura, estado, ameacado, licencaIBAMA));
		}
		else if(opcHab == 1){
			string origem;
			cin.ignore();
			cout << "País de origem: ";
			getline(cin, origem);
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AveExotica>(identificacao, preco, descricao, peso,sexo, habVoo, envergadura, origem));
		}
		else if(opcHab == 2){
			limparTelaEstoque();
			return adicionarAnimal(make_shared <AveDomestica>(identificacao, preco, descricao, peso,sexo, habVoo, envergadura));
		}
		else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}

	}
	else if (opcao == 4){ //mamifero
			Alimentacao alimentacao;
			int opcAlim;
			cout << "(0 - Carnivoro), (1 - Herbivoro) ou (2 - Onivoro)";
			cin >> opcAlim;
			if(opcAlim==0){
				alimentacao=Carnivoro;
			}else if(opcAlim==1){
				alimentacao=Herbivoro;
			}else{
				alimentacao=Onivoro;
			}
			if(opcHab == 0){
				string estado;
				cout << "Estado UF: ";
				cin >> estado;
				cout << "(0 - Não ameaçado) ou (1 - Ameaçado) ";
				cin >> ameacado;
				string licencaIBAMA;
				cout << "Licença para transporte IBAMA: ";
				cin >> licencaIBAMA;
				limparTelaEstoque();
				return adicionarAnimal(make_shared <MamiferoNativo>(identificacao, preco, descricao, peso, sexo, alimentacao, estado, ameacado, licencaIBAMA));
			}
			else if(opcHab == 1){
				string origem;
				cin.ignore();
				cout << "País de origem: ";
				getline(cin, origem);
				limparTelaEstoque();
				return adicionarAnimal(make_shared <MamiferoExotico>(identificacao, preco, descricao, peso, sexo, alimentacao, origem));
			}
			else if(opcHab == 2){
				limparTelaEstoque();
				return adicionarAnimal(make_shared <MamiferoDomestico>(identificacao, preco, descricao, peso, sexo, alimentacao));
			}
			else
			{
				cout << "Opção selecionada invalida..." << endl;
				return false;
			}

	}
	else
	{
		cout << "Opção selecionada invalida..." << endl;
		return false;
	}
	
}
bool Estoque::alterarAnimal(shared_ptr <Animal> animal){
	int ver;
	int opc;
	string id_;
	double preco_;
	string descricao_;
	double peso_;
	tipoSexo sexo_;
	Venenosos ven; //anfibio
	Venomous ven1;// reptil

	while (ver != 0)
	{
		cout <<"1 - Alterar identificação" << endl
			<< "2 - Alterar preço" << endl
			<< "3 - Alterar descrição" << endl
			<< "4 - Alterar peso" << endl
			<< "5 - Alterar sexo" << endl
			<< "6 - Alterar veneno" << endl
			<< "0 - Finalizar alteração" << endl;
			cin >> ver;

		if(ver == 1){
		
			do
			{
				cout << "Nova identificação: ";
				cin >> id_;
			} while (encontrarAnimal(id_));
		
			animal->setIdentificacao(id_);
		}
		if(ver == 2){	
			cout << "Novo preço: ";
			cin >> preco_;
			animal->setPreco(preco_);
			
		}
		if(ver == 3){
			cin.ignore();
			cout << "Nova descrição: ";
			getline(cin, descricao_);
			animal->setDescricao(descricao_);
		}
		if(ver == 4){
			cout << "Nova peso: ";
			cin >> peso_;
			animal->setPeso(peso_);
		}
		if(ver == 5){
			cout << "Novo sexo: (1 - Macho)/(2 - Femea) ";
			cin >> opc;
			if(opc == 1){
				sexo_ = macho; 
				animal->setSexo(sexo_);
			}
			else if(opc == 2)
			{	
				sexo_ = femea;
				animal->setSexo(sexo_);
			}
			else
			{
				cout << "Opção invalida..." << endl;
			}	
			
		}
		/*if (ver = 6 ){
			cout << "Animal venenoso: (1 - Venenoso)/(2 - Não é Venenoso) ";
			cin >> opc;
			if(animal.getTipoAnimal() == anfibioDomestico  || animal.getTipoAnimal() == anfibioExotico || animal.getTipoAnimal() == anfibioNativo){
				std::shared_ptr<Anfibio> alterado = dynamic_pointer_cast <Anfibio>(animal);
				if (opc == 1){
					ven = Venenoso;
				}
				else if(opc == 2){
					ven = naoVenenoso;

				}
				else
				{
					cout << "Opção invalida..." << endl;
				}
				
				
			}
			else if(animal.getTipoAnimal() == reptilDomestico || animal.getTipoAnimal() == reptilExotico || animal.getTipoAnimal() == reptilNativo)
			{
				if (opc == 1){
					ven1 = sim;
				}
				else if(opc == 2){
					ven1 = nao;
				}
				else
				{
					cout << "Opção invalida..." << endl;
				}				
			}
			
		}*/

	}
	return true;
}

void Estoque::salvarAnimais(){
	ofstream arqDados("dados.dat");
	shared_ptr <AnfibioDomestico> a1; 
	shared_ptr <AnfibioExotico> a2;
	shared_ptr <AnfibioNativo> a3;
	shared_ptr <AveDomestica> b1;
	shared_ptr <AveExotica> b2;
	shared_ptr <AveNativa> b3;
	shared_ptr <MamiferoDomestico> c1;
	shared_ptr <MamiferoExotico> c2;
	shared_ptr <MamiferoNativo> c3;
	shared_ptr <ReptilDomestico> d1;
	shared_ptr <ReptilExotico> d2;
	shared_ptr <ReptilNativo> d3;
	for(auto& animal: this->estoque){
		if(animal->getTipoAnimal()==anfibioDomestico){
			a1=dynamic_pointer_cast<AnfibioDomestico>(animal);
			arqDados<<a1->getTipoAnimal()<<";"<<a1->getIdentificacao()<<";"<<a1->getPreco()<<";"
				<<a1->getDescricao()<<";"<<a1->getPeso()<<";"<<a1->getSexo()<<";"<<a1->getVenenoso()<<endl;
		}
		if(animal->getTipoAnimal()==anfibioExotico){
			a2=dynamic_pointer_cast<AnfibioExotico>(animal);
			arqDados<<a2->getTipoAnimal()<<";"<<a2->getIdentificacao()<<";"<<a2->getPreco()<<";"
				<<a2->getDescricao()<<";"<<a2->getPeso()<<";"<<a2->getSexo()<<";"<<a2->getVenenoso()<<";"
				<<a2->getOrigem()<<endl;
		}
		if(animal->getTipoAnimal()==anfibioNativo){
			a3=dynamic_pointer_cast<AnfibioNativo>(animal);
			arqDados<<a3->getTipoAnimal()<<";"<<a3->getIdentificacao()<<";"<<a3->getPreco()<<";"
				<<a3->getDescricao()<<";"<<a3->getPeso()<<";"<<a3->getSexo()<<";"<<a3->getVenenoso()<<";"
				<<a3->getEstado()<<";"<<a3->getAmeacado()<<";"<<a3->getLicencaIBAMA()<<endl;
		}
		if(animal->getTipoAnimal()==aveDomestico){
			b1=dynamic_pointer_cast<AveDomestica>(animal);
			arqDados<<b1->getTipoAnimal()<<";"<<b1->getIdentificacao()<<";"<<b1->getPreco()<<";"
				<<b1->getDescricao()<<";"<<b1->getPeso()<<";"<<b1->getSexo()<<";"<<b1->getHabilidadeVoo()
				<<";"<<b1->getEnvergadura()<<endl;
		}
		if(animal->getTipoAnimal()==aveExotico){
			b2=dynamic_pointer_cast<AveExotica>(animal);
			arqDados<<b2->getTipoAnimal()<<";"<<b2->getIdentificacao()<<";"<<b2->getPreco()<<";"
				<<b2->getDescricao()<<";"<<b2->getPeso()<<";"<<b2->getSexo()<<";"<<b2->getHabilidadeVoo()
				<<";"<<b2->getEnvergadura()<<";"<<b2->getOrigem()<<endl;
		}
		if(animal->getTipoAnimal()==aveNativo){
			b3=dynamic_pointer_cast<AveNativa>(animal);
			arqDados<<b3->getTipoAnimal()<<";"<<b3->getIdentificacao()<<";"<<b3->getPreco()<<";"
				<<b3->getDescricao()<<";"<<b3->getPeso()<<";"<<b3->getSexo()<<";"<<b3->getHabilidadeVoo()
				<<";"<<b3->getEnvergadura()<<";"<<b3->getEstado()<<";"<<b3->getAmeacado()<<";"<<b3->getLicencaIBAMA()<<endl;
		}
		if(animal->getTipoAnimal()==mamiferoDomestico){
			c1=dynamic_pointer_cast<MamiferoDomestico>(animal);
			arqDados<<c1->getTipoAnimal()<<";"<<c1->getIdentificacao()<<";"<<c1->getPreco()<<";"
				<<c1->getDescricao()<<";"<<c1->getPeso()<<";"<<c1->getSexo()<<";"<<c1->getAlimentacao()<<endl;
		}
		if(animal->getTipoAnimal()==mamiferoExotico){
			c2=dynamic_pointer_cast<MamiferoExotico>(animal);
			arqDados<<c2->getTipoAnimal()<<";"<<c2->getIdentificacao()<<";"<<c2->getPreco()<<";"
				<<c2->getDescricao()<<";"<<c2->getPeso()<<";"<<c2->getSexo()<<";"<<c2->getAlimentacao()
				<<";"<<c2->getOrigem()<<endl;
		}
		if(animal->getTipoAnimal()==mamiferoNativo){
			c3=dynamic_pointer_cast<MamiferoNativo>(animal);
			arqDados<<c3->getTipoAnimal()<<";"<<c3->getIdentificacao()<<";"<<c3->getPreco()<<";"
				<<c3->getDescricao()<<";"<<c3->getPeso()<<";"<<c3->getSexo()<<";"<<c3->getAlimentacao()
				<<";"<<c3->getEstado()<<";"<<c3->getAmeacado()<<";"<<c3->getLicencaIBAMA()<<endl;
		}
		if(animal->getTipoAnimal()==reptilDomestico){
			d1=dynamic_pointer_cast<ReptilDomestico>(animal);
			arqDados<<d1->getTipoAnimal()<<";"<<d1->getIdentificacao()<<";"<<d1->getPreco()<<";"
				<<d1->getDescricao()<<";"<<d1->getPeso()<<";"<<d1->getSexo()<<";"<<d1->getVeneno()
				<<";"<<d1->getComprimento()<<endl;
		}
		if(animal->getTipoAnimal()==reptilExotico){
			d2=dynamic_pointer_cast<ReptilExotico>(animal);
			arqDados<<d2->getTipoAnimal()<<";"<<d2->getIdentificacao()<<";"<<d2->getPreco()<<";"
				<<d2->getDescricao()<<";"<<d2->getPeso()<<";"<<d2->getSexo()<<";"<<d2->getVeneno()
				<<";"<<d2->getComprimento()<<";"<<d2->getOrigem()<<endl;
		}
		if(animal->getTipoAnimal()==reptilNativo){
			d3=dynamic_pointer_cast<ReptilNativo>(animal);
			arqDados<<d3->getTipoAnimal()<<";"<<d3->getIdentificacao()<<";"<<d3->getPreco()<<";"
				<<d3->getDescricao()<<";"<<d3->getPeso()<<";"<<d3->getSexo()<<";"<<d3->getVeneno()
				<<";"<<d3->getComprimento()<<";"<<d3->getEstado()<<";"<<d3->getAmeacado()<<";"<<d3->getLicencaIBAMA()<<endl;
		}
	}
}

void Estoque::limparTelaEstoque(){
	#if defined _WIN32
    	system("cls");
	#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    	system("clear");
	#elif defined (__APPLE__)
    	system("clear");
	#endif
}
