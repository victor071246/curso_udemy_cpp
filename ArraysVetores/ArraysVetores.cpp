#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a m�dia destas notas*/


int main()
{
	//Seria interessante uma vari�vel que voc� pudesse delcarar e ela tivesse compartimentos

	//Agora foi criada uma vari�vel de notas com 5 compartimentos indexados a partir do zero [0]
	//Acess�veis por um �nico nome Notas[�ndice]
	//Devem ser todos os compartimentos o mesmo tipo de dados e por isso ela � considerada uma vari�vel composta(v�rios locais de armazenamento) e homog�nea por aceitar apenas um tipo de dado dentro de cada compartimento
	//Voc� j� pode iniciar os valores j� na declara��o

	//Por que este f?
	//Para indicar que os n�meros s�o float
	//Pois n�mero sem este f s�o considerados double e neste caso voc� estaria colocando double dentro do float
	float Notas[5]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
	//Importante inicializar vari�veis contadoras e acumuladoras
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "Digite o nome do aluno: \n";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota " << (i + 1) << ": \n";
		std::cin >> Notas[i];
		//Precisamos de uma v�riavel que acumule a soma das notas!
		Soma = Soma + Notas[i];
		system("CLS");
	}


	Media = Soma / 5;

	std::cout << "\nA media das notas do aluno " << NomeAluno <<" foi: " << Media << "\n";

	system("PAUSE");
	return 0;
}