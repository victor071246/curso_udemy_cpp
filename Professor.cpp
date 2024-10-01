#include "Professor.h"

void Professor::EfetuarChamada()
{
	std::cout << "Chamada efetuada\n";
}

void Professor::EntregarPauta()
{
	std::cout << "Pauta entrege\n";
}

std::string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(std::string NovoDepartamento)
{
	Departamento = NovoDepartamento;
}

void Professor::MostrarDados()
{
	//Aqui chamamos o método da classe base Pessoa
	Pessoa::MostrarDados();
	std::cout << "Deparatamento: " << GetDepartamento() << "\n";
}


