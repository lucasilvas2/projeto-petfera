#include "anfibio_exotico.hpp"

AnfibioExotico::AnfibioExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen,string origem, formaIntroducao introducao)
                :Anfibio(identificacao, preco, descricao, coloracao, ameacado, peso, sexo, tipoVen),Exotico(origem, introducao){}
AnfibioExotico::~AnfibioExotico(){}