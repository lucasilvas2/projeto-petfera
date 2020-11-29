#include "anfibio_nativo.hpp"

AnfibioNativo::AnfibioNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen, string estado, string licencaIBAMA)
                :Anfibio(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, tipoVen), Nativo(estado, licencaIBAMA){}
AnfibioNativo::~AnfibioNativo(){}