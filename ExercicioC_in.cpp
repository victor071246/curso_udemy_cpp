#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media{ 0.0 };
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Num2;
	std::cout << "Digite o terceiro n�mero: ";
	std::cin >> Num3;

	Media = (Num1 + Num2 + Num3) / 3;

	std::cout << "N�meros digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
	std::cout << "M�dia dos n�meros: " << Media << "\n";
	system("Pause");
	return 0;
}