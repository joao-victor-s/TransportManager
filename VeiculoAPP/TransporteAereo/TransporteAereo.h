#pragma once
#include "Veiculo.h"
class TransporteAereo :
    public Veiculo
{
private:
    double taxaManutencao;
    double custoTrans;
public:
    TransporteAereo(const string& tipo, int carga, double Vel, double taxaMan);
    
    void custoTransporte(double distancia) override;
    double getCustoTransp() const override;
    void exibirInfo() const override;
};

