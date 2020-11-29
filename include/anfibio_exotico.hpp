#include "anfibio.hpp"
#include "exotico.hpp"

class AnfibioExotico: public Anfibio, public Exotico{   
    private:
        ostream& print(ostream& o) const;
    public:
    AnfibioExotico(string identificacao, double preco, string descricao,string coloracao, bool ameacado, 
                double peso, tipoSexo sexo, Venenosos tipoVen,string origem, formaIntroducao introducao);
    ~AnfibioExotico();
};