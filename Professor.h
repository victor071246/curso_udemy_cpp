#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
public:

	Professor(){
	} //Construtor vazio
	//Estes s�o os par�metros que o construtor poder� receber
	Professor(std::string NovoNome, int NovoCPF, int NovaMatricula, std::string NovoDepartamento) : Pessoa(NovoNome, NovoCPF, NovaMatricula),Departamento(NovoDepartamento){
	}
	//Acima estamos chamando o construtor da classe Base(superclasse) para iniciar os par�metros do objeto professor
	void EfetuarChamada();
	void EntregarPauta();

	std::string GetDepartamento();
	void SetDepartamento(std::string NovoDepartamento);
	void MostrarDados();

private:
	std::string Departamento;
};

