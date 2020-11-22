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

	Reptil* largato = new Reptil("001", 200.00, nativo, 1, 0.50, macho,"Largato do brejo", sim, "Rosa com pintas rosadas", 3);
	largato -> setTratador(*lucas);
	largato -> setVeterinario(*fernando);

	cout << (*largato) << endl;
	
	return 0;
}