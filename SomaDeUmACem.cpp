#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int soma = 0;
	for (int numero = 1; numero <= 100; numero++)
	{
		soma = soma + numero;
	}
	std::cout << "A soma dos números de 1 a 100 é: " << soma << "\n";
	system("PAUSE");
	return 0;
}