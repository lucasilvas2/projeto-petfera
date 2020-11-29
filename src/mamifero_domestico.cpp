#include "mamifero_domestico.hpp"

MamiferoDomestico::MamiferoDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim):Mamifero(identificacao, preco, descricao, coloracao, ameacado, peso, sexo,tipoAlim){}
MamiferoDomestico::~MamiferoDomestico(){}