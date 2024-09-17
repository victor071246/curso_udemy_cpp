#include <iostream>
#include <locale.h>
#include "Matematica.h"

int NumeroGlobal = 5;

int main()
{


	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo número: ";
	std::cin >> Numero2;
	std::cout << "\nResultado dos operadores matemáticos\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtração: " << Subtracao(Numero1, Numero2);
	std::cout << "\nMultiplicação: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisão: " << Divisao(Numero1, Numero2);
	std::cout << "\nElevado: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaiz quadrada: " << RaizQuadrada(Numero1);
	system("PAUSE");
	return 0;
}