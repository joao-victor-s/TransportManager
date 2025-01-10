#pragma once
#include "Veiculo.h"
class TransporteTerrestre :
    public Veiculo
{
private:
    double consumoCombustivel;
    double precoCombustivel;
    double custoTrans;
public:
    TransporteTerrestre(const string& tipo, int carga, double Vel, double consumo, double preco);
    void custoTransporte(double distancia) override;
    double getCustoTransp() const override;
    void exibirInfo() const override;
};

