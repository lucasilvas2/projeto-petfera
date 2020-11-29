#include "mamifero.hpp"
#include "exotico.hpp"

class MamiferoExotico: public Mamifero, public Exotico{
    public:
        MamiferoExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Alimentacao tipoAlim, string origem, formaIntroducao introducao);
        ~MamiferoExotico();
};