#include <iostream>
#include <locale.h>
#include "Matematica.h"

int main()
{
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro n�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo n�mero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado dos operadores matem�ticos\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtra��o: " << Subtracao(Numero1, Numero2);
	std::cout << "\nMultiplica��o: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivis�o: " << Divisao(Numero1, Numero2);
	std::cout << "\nElevado: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaiz quadrada: " << RaizQuadrada(Numero1);
	system("PAUSE");
	return 0;
}