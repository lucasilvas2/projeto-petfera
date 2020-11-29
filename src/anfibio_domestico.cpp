#include "anfibio_domestico.hpp"

AnfibioDomestico::AnfibioDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen):Anfibio(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, tipoVen){}
AnfibioDomestico::~AnfibioDomestico(){}