#include "TransporteAereo.h"
#include <iostream>
using namespace std;

TransporteAereo::TransporteAereo(const string& tipo, int carga, double Vel, double taxaMan) : Veiculo(tipo, carga, Vel), taxaManutencao(taxaMan), custoTrans(0) {}

void TransporteAereo::custoTransporte(double distancia)
{
    custoTrans = distancia * taxaManutencao * VelMedia;
}

double TransporteAereo::getCustoTransp() const
{
    return custoTrans;
}

void TransporteAereo::exibirInfo() const
{
    cout << "##################################" << endl;
    exibirInfoBase();
    cout << "Taxa Manutencao: R$" << taxaManutencao << endl;
    cout << "Preco do Transporte: R$ " << custoTrans << endl;
    cout << "##################################" << endl;

}

