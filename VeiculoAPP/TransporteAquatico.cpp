#include "TransporteAquatico.h"
#include <iostream>
using namespace std;

TransporteAquatico::TransporteAquatico(const string& tipo, int carga, double Vel, double taxaMan)
: Veiculo(tipo, carga, Vel), taxaPortuaria(taxaMan), custoTrans(0) {}

void TransporteAquatico::custoTransporte(double distancia)
{
	custoTrans = distancia * VelMedia * taxaPortuaria;
}

double TransporteAquatico::getCustoTransp() const
{
	return custoTrans;
}

void TransporteAquatico::exibirInfo() const
{
    cout << "##################################" << endl;
    exibirInfoBase();
    cout << "Taxa Portuaria: R$ " << taxaPortuaria << endl;
    cout << "Preco do Transporte: R$ " << custoTrans << endl;
    cout << "##################################" << endl;

}





