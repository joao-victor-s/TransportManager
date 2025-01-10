#include "TransporteTerrestre.h"
#include "Veiculo.h"
#include <iostream>
using namespace std;

TransporteTerrestre::TransporteTerrestre(const string& tipo, int carga, double Vel, double consumo, double preco)
    : Veiculo(tipo, carga, Vel), consumoCombustivel(consumo), precoCombustivel(preco), custoTrans(0) {}

void TransporteTerrestre::custoTransporte(double distancia) 
{
    custoTrans = distancia * consumoCombustivel * precoCombustivel;
}

double TransporteTerrestre::getCustoTransp() const
{
    return custoTrans;
}

void TransporteTerrestre::exibirInfo() const
{
    cout << "##################################" << endl;
    exibirInfoBase();
    cout << "Consumo por km: " << consumoCombustivel << " l/km" << endl;
    cout << "Preco do combustivel: R$ " << precoCombustivel << " por litro" << endl;
    cout << "Preco do Transporte: R$ " << custoTrans  << endl;
    cout << "##################################" << endl;

}