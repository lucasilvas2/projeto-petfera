#include "anfibio.hpp"
#include "nativo.hpp"

class AnfibioNativo: public Anfibio, public Nativo{
    private:
        ostream& print(ostream& o) const;    
    public:
        AnfibioNativo(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Venenosos tipoVen, string estado, bool ameacado, string licencaIBAMA);
        ~AnfibioNativo();
};