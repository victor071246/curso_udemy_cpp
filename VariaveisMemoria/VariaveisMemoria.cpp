#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho da variável Número: " << sizeof(Numero) << " bytes\n";
	std::cout << "\n Tamanho da variável Salário: " << sizeof(Salario) << " bytes\n";
	std::cout << "\n Endereço de memória da variável Número: " << &Numero << "\n";
	std::cout << "\n Endereço de memória da variável Salário: " << &Salario << "\n";

	system("PAUSE");
	return 0;
}