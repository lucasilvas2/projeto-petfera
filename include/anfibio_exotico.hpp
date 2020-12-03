#include "anfibio.hpp"
#include "exotico.hpp"

class AnfibioExotico: public Anfibio, public Exotico{   
    private:
        ostream& print(ostream& o) const;
    public:
    AnfibioExotico(string identificacao, double preco, string descricao, 
                double peso, tipoSexo sexo, Venenosos tipoVen,string origem);
    ~AnfibioExotico();
};