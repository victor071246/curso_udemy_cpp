#include <iostream>
int main()
{
	int Num1, Num2, Num3, Num4;

	std::cout << "Digite Quatro numeros separados por espaco e pressione ENTER: ";

	std::cin >> Num1 >> Num2 >> Num3 >> Num4;

	std::cout << "\nSoma = " << (Num1 + Num2 + Num3 + Num4) << std::endl;


	return 0;
}