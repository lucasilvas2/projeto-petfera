#include <iostream>
#include "tratador.hpp"

int main(int argc, char const *argv[])
{
	/*Estoque petfera;
	petfera.teste();*/

	Tratador* lucas = new Tratador("Lucas", "84 91111-1111", "Rua replantada", vermelho);

	cout << (*lucas) << endl;
	
	return 0;
}