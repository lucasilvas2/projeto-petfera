#include <iostream>


#include "reptil_nativo.hpp"
#include "reptil_exotico.hpp"
#include "reptil_domestico.hpp"

#include "ave_nativa.hpp"
#include "ave_exotica.hpp"
#include "ave_domestica.hpp"

#include "anfibio_nativo.hpp"
#include "anfibio_domestico.hpp"
#include "anfibio_exotico.hpp"

#include "mamifero_nativo.hpp"
#include "mamifero_exotico.hpp"
#include "mamifero_domestico.hpp"

#include "tratador.hpp"
#include "veterinario.hpp"


int main(int argc, char const *argv[])
{	
	
	Tratador* lucas = new Tratador("Lucas", "84 91111-1111", "Rua replantada", vermelho);
	Veterinario* fernando = new Veterinario("Fernando", "84 91111-1111", "Rua asfaltada", "89456-0");
	

	cout << (*lucas) << endl;
	cout << (*fernando) << endl;
	
	ReptilNativo* largato = new ReptilNativo("2020", 200.00, "Largato do brejo", "Rosa com pintas rosas", 1, 0.50,macho, sim, 3 , "RN", "526-20");
	largato -> setTratador(*lucas);
	largato -> setVeterinario(*fernando);
	cout << ((Reptil) *largato) << endl;
	cout << (*largato) << endl;

	/*Aves* calopsita = new Aves("3030", 100.15, "Calopsita berradeira", "Laranja", domestico, 0, 0.45, femea, carenatas, 0.89);
	cout << (*calopsita) << endl;
	
	Anfibios* sapo = new Anfibios("4040", 50.1 ,"Sapo cururu", "preto", nativo, 0, 0.30, femea , naoVenenoso);
	cout << (*sapo) << endl;

	Mamiferos* cachorro = new Mamiferos("5050", 123.50 ,"Pastor Alemao", "Marrom", domestico, 0, 20.00,macho , Carnivoro);
	cout << (*cachorro) << endl;*/

	return 0;
}