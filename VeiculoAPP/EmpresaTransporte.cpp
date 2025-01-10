#include "EmpresaTransporte.h"
#include "TransporteTerrestre.h"
#include <iostream>
using namespace std;

void EmpresaTransporte::adicionarVeiculo(Veiculo* veiculo)
{
	veiculos.push_back(veiculo);
}

double EmpresaTransporte::custoTotal(double distancia) const
{
    double resp = 0;
    for (Veiculo* veiculo : veiculos)
    {
        veiculo->custoTransporte(distancia);
        resp += veiculo->getCustoTransp();
    }
    return resp;
}

const void EmpresaTransporte::exibirVeiculos()
{
    double result = 0;
    for (Veiculo* veiculo : veiculos) {
        veiculo->exibirInfo();
        result += veiculo->getCustoTransp();
    }
    cout << "Custo Total dos Transportes: R$ " << result << endl;
    cout << "##################################" << endl;
}


EmpresaTransporte::~EmpresaTransporte() {
    // Liberacao de memoria para evitar vazamento
    for (Veiculo* veiculo : veiculos) {
        delete veiculo; // Deleta cada objeto apontado
    }
    veiculos.clear(); // Limpa o vetor
}