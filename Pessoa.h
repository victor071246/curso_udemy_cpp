#pragma once
#include <iostream>

//Quando voc� n�o indica a visibilidade, o encapsulamento, por padr�o em uma classe, ele ser� private
class Pessoa
{
public:

	//Interessante criar construtores
	//Aqui o construtor padr�o j� pode receber valores padr�es desta forma
	Pessoa():Nome(""),CPF(0), Matricula(0) {}

	//Isso seria o mesmo que criar assim: 
	//Pessoa()
	//{
	//	Nome = "";
	//	CPF = 0;
	//	Matricula = 0;
	//}

	//Agora um construtor com par�metros

	Pessoa(std::string NovoNome, int CPF, int Matricula):Nome(Nome), CPF(CPF), Matricula(Matricula){}
	//{
	//	Nome = Nome;
	//	CPF = CPF;
	//	Matricula = NovaMatricula;
	//}

	void AcessarSistema();
	
	//Como agora os atributos s�o privados, voc� precisa criar m�todos p�blicos que poder�o ser usados para obter(GET) ou alterar(SET) estes atributos.
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

