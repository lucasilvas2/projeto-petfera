#include "anfibio.hpp"
#include "nativo.hpp"

class AnfibioNativo: public Anfibio, public Nativo{
    private:
        ostream& print(ostream& o) const;    
    public:
        AnfibioNativo(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen, string estado, string licencaIBAMA);
        ~AnfibioNativo();
};