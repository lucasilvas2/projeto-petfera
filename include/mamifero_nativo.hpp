#include "mamifero.hpp"
#include "nativo.hpp"

class MamiferoNativo : public Mamifero, public Nativo{
    public:
        MamiferoNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim, string estado, string licencaIBAMA);
        ~MamiferoNativo();
};