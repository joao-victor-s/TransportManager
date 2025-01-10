#pragma once
#include "Veiculo.h"
#include <vector>
class EmpresaTransporte 
{
private:
	vector <Veiculo*> veiculos;
public:
	~EmpresaTransporte();
	void adicionarVeiculo(Veiculo* veiculo);
	double custoTotal(double distancia) const;	
	const void exibirVeiculos();
};

