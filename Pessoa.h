#pragma once
#include <iostream>

//Quando você não indica a visibilidade, o encapsulamento, por padrão em uma classe, ele será private
class Pessoa
{
public:

	//Interessante criar construtores
	//Aqui o construtor padrão já pode receber valores padrões desta forma
	Pessoa():Nome(""),CPF(0), Matricula(0) {}

	//Isso seria o mesmo que criar assim: 
	//Pessoa()
	//{
	//	Nome = "";
	//	CPF = 0;
	//	Matricula = 0;
	//}

	//Agora um construtor com parâmetros

	Pessoa(std::string NovoNome, int CPF, int Matricula):Nome(Nome), CPF(CPF), Matricula(Matricula){}
	//{
	//	Nome = Nome;
	//	CPF = CPF;
	//	Matricula = NovaMatricula;
	//}

	void AcessarSistema();
	
	//Como agora os atributos são privados, você precisa criar métodos públicos que poderão ser usados para obter(GET) ou alterar(SET) estes atributos.
	std::string GetNome();
	int GetCPF();
	int GetMatricula();
	void SetNome(std::string Nome);
	void SetCPF(int CPF);
	void SetMatricula(int Matricula);
	void MostrarDados();

private:
	std::string Nome;
	int CPF;
	int Matricula;


};

