#include "reptil.hpp"
#include "exotico.hpp"

class ReptilExotico: public Reptil, public Exotico{
    public:
        ReptilExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venomous veneno, double comprimento, string origem, formaIntroducao introducao);
        ~ReptilExotico();
};