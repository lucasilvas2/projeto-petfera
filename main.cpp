#include <iostream>
#include "reptil.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

int main(int argc, char const *argv[])
{
	/*Estoque petfera;
	petfera.teste();*/

	Tratador* lucas = new Tratador("Lucas", "84 91111-1111", "Rua replantada", vermelho);
	Veterinario* fernando = new Veterinario("Fernando", "84 91111-1111", "Rua asfaltada", "89456-0");
	

	cout << (*lucas) << endl;
	cout << (*fernando) << endl;
	//"001", 200.00,"Largato do brejo", "Rosa com pintas rosadas", nativo, 1, 0.50, macho, sim, 3
	Reptil* largato = new Reptil("2020", 200.00, "Largato do brejo", "Rosa com pintas rosas", nativo, 1, 0.50,macho, sim, 3 );
	largato -> setTratador(*lucas);
	largato -> setVeterinario(*fernando);

	cout << (*largato) << endl;
	
	return 0;
}