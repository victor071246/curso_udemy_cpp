#include <iostream>
#include <cstring>

struct Data
{
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;
};

struct Pessoa
{
	std::string Nome;
	//Aqui foi declarada uma variável do tipo Data
	Data DtNascimento;
	//Aqui foi declarada uma variável do tipo Endereco
	Endereco Endereco;
};

int main()
{
	struct Pessoa Pessoa01[2];
	for (int i = 0; i < 2; i++){
		Pessoa01[i].Nome = "Udemy";
		Pessoa01[i].DtNascimento.Dia = 01;
		Pessoa01[i].DtNascimento.Mes = 02;
		Pessoa01[i].DtNascimento.Ano = 2009;
		Pessoa01[i].Endereco.Rua = "Rua A";
		Pessoa01[i].Endereco.Cidade = "Sao Francisco";
		Pessoa01[i].Endereco.Estado = "California";
		Pessoa01[i].Endereco.Pais = "EUA";
	}

	
	for (int i = 0; i < 2; i++){
		std::cout << "Nome: " << Pessoa01[i].Nome << "\n";
		//Para colocar uma barra invertida lembre de duplicar \\ se você colocar apenas uma barra o compilador interpreta de maneira errada
		std::cout << "Data de nascimento: " << Pessoa01[i].DtNascimento.Dia << "\\" << Pessoa01[i].DtNascimento.Mes << "\\" << Pessoa01[i].DtNascimento.Ano << "\\" << "\n";
	}
	

	system("PAUSE");
	return 0;
}

