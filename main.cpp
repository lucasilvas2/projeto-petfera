#include <iostream>
#include "animais.hpp"
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
	
	return 0;
}