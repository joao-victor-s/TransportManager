# Nome do projeto
cmake_minimum_required(VERSION 3.10)
project(GerenciamentoDeTransportes)

# Define o padrão de compilação
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adiciona o executável principal
add_executable(GerenciamentoDeTransportes
    main.cpp
    EmpresaTransporte/EmpresaTransporte.cpp
    TransporteTerrestre/TransporteTerrestre.cpp
    TransporteAquatico/TransporteAquatico.cpp
    TransporteAereo/TransporteAereo.cpp
)

# Inclui os diretórios de cabeçalhos
target_include_directories(GerenciamentoDeTransportes PRIVATE
    EmpresaTransporte
    TransporteTerrestre
    TransporteAquatico
    TransporteAereo
    Veiculo
)