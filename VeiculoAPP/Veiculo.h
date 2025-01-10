#include <string>
#include <iostream>
using namespace std;

#pragma once
class Veiculo
{
protected:
	string tipo;
	int capacidade;
	double VelMedia;

	//construtor protegido
	Veiculo(const string& tipoVeiculo, int carga, double Vel) : tipo(tipoVeiculo), capacidade(carga), VelMedia(Vel) {}
public:
	virtual ~Veiculo() = default;

	// metodo info basico
	void exibirInfoBase() const {
		cout << "Tipo: " << tipo << endl;
		cout << "Capacidade: " << capacidade << " kg" << endl;
		cout << "Velocidade Media: " << VelMedia << " km/h" << endl;
	}

	//metodos virtual puros 
	virtual void custoTransporte(double distancia) = 0;
	virtual double getCustoTransp() const = 0;
	virtual void exibirInfo() const = 0;
};

