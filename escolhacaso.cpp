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
	std::cout << "Qual operacao deseja efetuar? \n + Adicao \n - Subtra��o \n * Multiplica��o ou \n / Divis�o?";
	std::cout << "\nDigite sua op��o: ";
	std::cin >> Operacao;

	switch (Operacao)
	{

	//O usu�rio vai digitar um caractere. Como o caractere � mapeado como inteiro da tabela ASCII, o switch permite este tipo de express�o.
	//Logo Opera��o pode ser + - *
	case '+': std::cout << "\nSoma de Num1 + Num2 = " << num1 + num2;
		break;
	case '-': std::cout << "\n Num1 - Num2 = " << num1 - num2;
		break;
	case '*': std::cout << "\n Num1 * Num2 = " << num1 * num2;
		break;
	case '/': std::cout << "\n Num1 / Num2 = " << num1 / num2;
		break;

	default:
		std::cout << "Voc� n�o digitou um operador v�lido";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}