#include "reptil.hpp"
#include "domestico.hpp"

class ReptilDomestico: public Reptil, public Domestico{
    public:
        ReptilDomestico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento);
        ~ReptilDomestico();
};
