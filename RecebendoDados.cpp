#include <iostream>
#include <tchar.h>
	

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero01, Numero02;
	int Soma;
	bool Comparacao;
	std::cout << "Digite o primeiro número: \n" ;
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo número: \n";
	std::cin >> Numero02;
	Comparacao = (Numero01 == Numero02);
	std::cout << "Numero01 igual a Numero02?: " << Comparacao << "\n"








	//std::cout << "Numero02 = " << Numero02 << std::endl;
	//Soma = Numero01 + Numero02;
	//std::cout << "Soma dos dois números: " << Soma << std::endl;
	//Subtracao = Numero01 - Numero02;
	//std::cout << "Subtraindo o segundo número do primeiro: " << Subtracao << std::endl;
	system("PAUSE");


}