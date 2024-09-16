#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero02;

	//Neste caso o operador ternario ? est� sendo utilizado para atribuir um valor a uma vari�vel
	//Se Numero01 for maior que Numero02, maior numero recebe valor de Numero01. Caso Contr�rio(sen�o) MaiorNumero recebe Numero02
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "Maior Numero Digitado: " << MaiorNumero << "\n";
	//Aqui o operador ? est� sendo utilizado para decidir que comando ser� executado. Se for True o primeiro std:: vai para tela
	//Se for Falso o segundo std vai para a tela
	if (Numero01 > Numero02)
		std::cout << "\nNumero01 maior que Numero02\n";
	else
		std::cout << "Numero02 maior que Numero01\n";
	system("PAUSE");
}