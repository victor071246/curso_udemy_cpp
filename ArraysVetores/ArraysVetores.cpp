#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a média destas notas*/


int main()
{
	//Seria interessante uma variável que você pudesse delcarar e ela tivesse compartimentos

	//Agora foi criada uma variável de notas com 5 compartimentos indexados a partir do zero [0]
	//Acessíveis por um único nome Notas[índice]
	//Devem ser todos os compartimentos o mesmo tipo de dados e por isso ela é considerada uma variável composta(vários locais de armazenamento) e homogênea por aceitar apenas um tipo de dado dentro de cada compartimento
	//Você já pode iniciar os valores já na declaração

	//Por que este f?
	//Para indicar que os números são float
	//Pois número sem este f são considerados double e neste caso você estaria colocando double dentro do float
	float Notas[5]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
	//Importante inicializar variáveis contadoras e acumuladoras
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "Digite o nome do aluno: \n";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota " << (i + 1) << ": \n";
		std::cin >> Notas[i];
		//Precisamos de uma váriavel que acumule a soma das notas!
		Soma = Soma + Notas[i];
		system("CLS");
	}


	Media = Soma / 5;

	std::cout << "\nA media das notas do aluno " << NomeAluno <<" foi: " << Media << "\n";

	system("PAUSE");
	return 0;
}