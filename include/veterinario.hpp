#pragma once
#include "profissional.hpp"

class Veterinario : public Profissional{
private:
    string crmv;

    ostream& print(ostream& o) const;
public:
    Veterinario(string nome,string contato, string endereco, string crmv);
    ~Veterinario();

    string getCrmv() const;
    void setCrmv(string crmv);  
};