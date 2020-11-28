#pragma once
#include <iostream>

using std::string;

class Nativo{
private:
    string silvestre = "Nativo"; 
    bool ameacado;
public:
    Nativo(bool ameacado);
    ~Nativo();

    string getSilvestre() const;
    bool getAmeacado() const;

    void setAmeacado(bool ameacado);
};