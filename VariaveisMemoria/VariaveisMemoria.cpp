#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho da vari�vel N�mero: " << sizeof(Numero) << " bytes\n";
	std::cout << "\n Tamanho da vari�vel Sal�rio: " << sizeof(Salario) << " bytes\n";
	std::cout << "\n Endere�o de mem�ria da vari�vel N�mero: " << &Numero << "\n";
	std::cout << "\n Endere�o de mem�ria da vari�vel Sal�rio: " << &Salario << "\n";

	system("PAUSE");
	return 0;
}