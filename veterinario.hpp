#pragma once
#include <string>

using std::string;

class Veterinario{
private:
    string nome;
    string crmv;
public:
    Veterinario(string nome, string crmv);
    ~Veterinario();
    string getNome();
    void setNome(string nome);
    string getCrmv();
    void setCrmv(string crmv);  
};