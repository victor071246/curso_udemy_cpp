#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "1 - Para meia entrada\n";
		std::cout << "2 - Para entrada inteira \n";
		std::cout << "3 - Sair\n";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nMeia entrada comprada\n";
			break;
		case 2: std::cout << "\nEntrada inteira comprada\n";
			break;
		case 3: std::cout << "\nSaindo menu tickets\n";
			break;
		default: std::cout << "\nOpção inválida!!!\n";
		}

		std::cout << "\nEscolha sua opção: ";
	} while (escolha != 3);//Enquanto escolha for diferente de 3 o menu vai aparecer! Pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}