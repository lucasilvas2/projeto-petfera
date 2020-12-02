#include "reptil.hpp"
#include "nativo.hpp"

class ReptilNativo : public Reptil, public Nativo{
        private:
                ostream& print(ostream& o) const;
        public:
                ReptilNativo(string identificacao, double preco, string descricao, double peso, tipoSexo sexo, Venomous veneno, 
                                double comprimento, string estado, bool ameacado, string licencaIBAMA);
                ~ReptilNativo();
};