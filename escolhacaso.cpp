#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2;
	char Operacao;
	std::cout << "\nDigite um numero: ";
	std::cin >> num1;
	std::cout << "\nDigite outro numero: ";
	std::cin >> num2;
	std::cout << "Qual operacao deseja efetuar? \n + Adicao \n - Subtração \n * Multiplicação ou \n / Divisão?";
	std::cout << "\nDigite sua opção: ";
	std::cin >> Operacao;

	switch (Operacao)
	{

	//O usuário vai digitar um caractere. Como o caractere é mapeado como inteiro da tabela ASCII, o switch permite este tipo de expressão.
	//Logo Operação pode ser + - *
	case '+': std::cout << "\nSoma de Num1 + Num2 = " << num1 + num2;
		break;
	case '-': std::cout << "\n Num1 - Num2 = " << num1 - num2;
		break;
	case '*': std::cout << "\n Num1 * Num2 = " << num1 * num2;
		break;
	case '/': std::cout << "\n Num1 / Num2 = " << num1 / num2;
		break;

	default:
		std::cout << "Você não digitou um operador válido";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}