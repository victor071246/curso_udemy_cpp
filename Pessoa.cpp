#include "Pessoa.h"

void Pessoa::AcessarSistema()
{
	std::cout << "****Acesso ao sistema concedido****";
}

std::string Pessoa::GetNome()
{
	return Nome;
}

int Pessoa::GetCPF()
{
	return 0;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

void Pessoa::SetNome(std::string Nome)
{
	//Como o compilador sabe quem � vari�vel local Nome e quem � o atributo Nome?
	//Isso ocorre pois o this-> est� subentendido, est� impl�cito 
	this->Nome = Nome;
}

void Pessoa::SetCPF(int CPF)
{
	this->CPF = CPF;
}

void Pessoa::SetMatricula(int Matricula)
{
	this->Matricula = Matricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "****DADOS****\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";
}
