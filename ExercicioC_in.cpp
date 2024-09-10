#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media{ 0.0 };
	std::cout << "Digite o primeiro número: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo número: ";
	std::cin >> Num2;
	std::cout << "Digite o terceiro número: ";
	std::cin >> Num3;

	Media = (Num1 + Num2 + Num3) / 3;

	std::cout << "Números digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
	std::cout << "Média dos números: " << Media << "\n";
	system("Pause");
	return 0;
}