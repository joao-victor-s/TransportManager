
#include "EmpresaTransporte.h"
#include "TransporteAereo.h"
#include "TransporteAquatico.h"
#include "TransporteTerrestre.h"
#include "Veiculo.h"
#include <iostream>

int main()
{
	EmpresaTransporte gestor;

	TransporteTerrestre * caminhao = new TransporteTerrestre("Terrestre", 15, 90.0, 10.4, 5.69);
	caminhao->custoTransporte(2);

	TransporteAereo* aviao = new TransporteAereo("Aereo", 200, 90, 5);
	aviao->custoTransporte(3);

	TransporteAquatico* submarino = new TransporteAquatico("Aquatico", 10, 25, 3);
	submarino->custoTransporte(5);

	gestor.adicionarVeiculo(caminhao);
	gestor.adicionarVeiculo(aviao);
	gestor.adicionarVeiculo(submarino);
	gestor.exibirVeiculos();

	cout << "Custo Total por km: R$ " << gestor.custoTotal(100) << endl;

}

