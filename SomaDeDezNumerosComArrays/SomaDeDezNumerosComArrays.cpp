#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Soma = 0;
	float ArrayDaSoma[10]{ 0.0f };

	for (int i = 0; i < 10; i++)
	{
		std::cout << "\nDigite o n�mero " << i+1 << " \n";
		std::cin >> ArrayDaSoma[i];
		Soma = Soma + ArrayDaSoma[i];
	}
	std::cout << "A soma dos 10 n�meros inseridos �: " << Soma << "\n";

	system("PAUSE");
	return 0;
}