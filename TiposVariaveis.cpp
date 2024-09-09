#include <iostream>
#include <tchar.h>
#include <iomanip>



int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero;
	float Numero2;
	double Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';
	Numero = 45;
	Numero2 = 55.56f;
	std::cout << "Valor número: " << Numero << std::endl;
	std::cout << "Tamanho da variável Numero: " << sizeof(Numero) << " bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << &Numero << std::endl;
	std::cout << std::endl;

	std::cout << "Valor número: " << Numero2 << std::endl;
	std::cout << "Tamanho da variável Numero2: " << sizeof(Numero2) << " bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << &Numero2 << std::endl;
	std::cout << std::endl;

	std::cout << "Valor número: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variável Numero3: " << sizeof(Numero3) << " bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << &Numero3 << std::endl;
	std::cout << std::endl;

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da variável Caractere: " << sizeof(Caractere) << " bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << (void*) &Caractere << std::endl;
	std::cout << std::endl;

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da variável Caractere2: " << sizeof(Caractere2) << " bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << (void *) &Caractere2 << std::endl;
	std::cout << std::endl;

	system("PAUSE");
}


////Programa para incluir unicode na tela
//#include <iostream>
//#include <fcntl.h>
//#include <io.h>
//int main()
//{
//	_setmode(_fileno(stdout), _O_U16TEXT);
//	std::wcout << L"\u250f";
//	system("PAUSE");
//}