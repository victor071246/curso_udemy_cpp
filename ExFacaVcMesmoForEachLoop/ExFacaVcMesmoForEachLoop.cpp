/*Uma escola deseja clacular o valor média das notas de um aluno ao longo do semestre. Esta escola possui os seguintes valores das notas deste aluno: 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, e 10
Utilizando o conceito de for each C++ e palavra reservada auto coloque na tela a média das notas deste aluno.
Obs: Para calcular o tamanho do vetor use o operador sizeof que você aprendeu na aula "Calculando tamanho do array: sizeof e std::size"
*/
#include <iostream>
#include <iomanip>

int main()
{


	double Notas[]{ 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10 };
	double SomaDasNotas{ 0.0 };
	int TamArray;
	TamArray = sizeof(Notas) / sizeof(double);
	for (auto Nota : Notas)
	{
		SomaDasNotas += Nota;
	}
	std::cout << "Media de notas do aluno: "<< std::setprecision(2) << std::fixed << SomaDasNotas / TamArray << "\n";
	system("PAUSE");
	return 0;
}