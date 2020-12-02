#include "mamifero.hpp"
#include "nativo.hpp"

class MamiferoNativo : public Mamifero, public Nativo{
    private:
        ostream& print(ostream& o) const;
    public:
        MamiferoNativo(string identificacao, double preco, string descricao,
                double peso, tipoSexo sexo, Alimentacao tipoAlim, string estado, bool ameacado,string licencaIBAMA);
        ~MamiferoNativo();
};