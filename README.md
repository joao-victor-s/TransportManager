# TransportManager

# 🚚💻 Desafio Avançado: Sistema de Gerenciamento de Transportes em C++ 🚀

Este desafio foi desenvolvido para praticar conceitos avançados de **Programação Orientada a Objetos (POO)** em C++, incluindo **herança de classes**, **polimorfismo**, **métodos virtuais** e **padrões de design**.

---

## 📝 Descrição

O objetivo é criar um sistema para gerenciar diferentes tipos de veículos em uma empresa de transporte. A empresa utiliza veículos terrestres, aquáticos e aéreos, cada um com características e custos de transporte específicos.

---

## 📋 Requisitos

1. **Classe Base**: `Veiculo`
   - **Atributos**:
     - `string tipo`: Tipo do veículo (e.g., "Terrestre").
     - `int capacidade`: Capacidade de carga em kg.
     - `double velocidadeMedia`: Velocidade média do veículo em km/h.
   - **Métodos**:
     - Construtor para inicializar os atributos.
     - Método virtual puro `custoTransporte(double distancia)`:
       - Calcula o custo do transporte com base na distância.
     - Método virtual `exibirInfo()`:
       - Exibe as informações do veículo.

2. **Classes Derivadas**:
   - **`TransporteTerrestre`**:
     - **Atributos Adicionais**:
       - `double consumoCombustivel`: Consumo de combustível em litros/km.
       - `double precoCombustivel`: Preço do combustível por litro.
     - **Implementação do Método `custoTransporte`**:
       - Fórmula: `distancia * consumoCombustivel * precoCombustivel`.
   - **`TransporteAquatico`**:
     - **Atributos Adicionais**:
       - `double taxaPortuaria`: Taxa por km em R$.
     - **Implementação do Método `custoTransporte`**:
       - Fórmula: `distancia * velocidadeMedia * taxaPortuaria`.
   - **`TransporteAereo`**:
     - **Atributos Adicionais**:
       - `double taxaManutencao`: Taxa de manutenção por km e capacidade.
     - **Implementação do Método `custoTransporte`**:
       - Fórmula: `distancia * capacidade * taxaManutencao`.

3. **Classe Gerenciadora**: `EmpresaTransporte`
   - **Atributos**:
     - Um vetor (`std::vector`) de ponteiros para objetos da classe base `Veiculo`.
   - **Métodos**:
     - `adicionarVeiculo(Veiculo* veiculo)`: Adiciona novos veículos ao sistema.
     - `custoTotal(double distancia)`: Calcula o custo total de transporte para uma distância fornecida.
     - `exibirVeiculos()`: Exibe as informações detalhadas de todos os veículos cadastrados.

---

## 🔄 Exemplo de Fluxo

1. O programa principal cria um objeto da classe `EmpresaTransporte`.
2. O usuário pode adicionar diferentes tipos de veículos ao sistema:
   - Exemplo: Um caminhão terrestre, um navio aquático e um avião aéreo.
3. O sistema solicita os dados necessários ao criar cada veículo (e.g., consumo de combustível, taxa portuária).
4. O usuário informa uma distância e o sistema calcula:
   - O custo de transporte para cada veículo.
   - O custo total de transporte.
5. O programa exibe:
   - Detalhes de cada veículo.
   - O custo total de transporte.

---

## 💡 Dicas para Implementação

- Use **métodos virtuais puros** para garantir que as subclasses implementem suas próprias versões de `custoTransporte` e `exibirInfo`.
- Trabalhe com **ponteiros para a classe base** (`Veiculo*`) na classe gerenciadora (`EmpresaTransporte`) para aproveitar o polimorfismo.
- Utilize **memória dinâmica**:
  - Crie objetos com `new`.
  - Libere os objetos no destrutor da classe gerenciadora usando `delete`.
- Use um `std::vector<Veiculo*>` para armazenar os veículos na classe gerenciadora.

---

