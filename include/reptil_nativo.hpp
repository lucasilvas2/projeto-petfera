#include "reptil.hpp"
#include "nativo.hpp"

class ReptilNativo : public Reptil, public Nativo{
    public:
        ReptilNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string estado, string licencaIBAMA);
        ~ReptilNativo();
};