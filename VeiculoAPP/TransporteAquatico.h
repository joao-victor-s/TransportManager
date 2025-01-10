#pragma once
#include "Veiculo.h"
class TransporteAquatico :
    public Veiculo
{
private:
    double taxaPortuaria;
    double custoTrans;
public:
    TransporteAquatico(const string& tipo, int carga, double Vel, double taxaMan);
    
    void custoTransporte(double distancia) override;
    double getCustoTransp() const override;
    void exibirInfo() const override;
};

