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
	std::cout << "Valor n�mero: " << Numero << std::endl;
	std::cout << "Tamanho da vari�vel Numero: " << sizeof(Numero) << " bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << &Numero << std::endl;
	std::cout << std::endl;

	std::cout << "Valor n�mero: " << Numero2 << std::endl;
	std::cout << "Tamanho da vari�vel Numero2: " << sizeof(Numero2) << " bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << &Numero2 << std::endl;
	std::cout << std::endl;

	std::cout << "Valor n�mero: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da vari�vel Numero3: " << sizeof(Numero3) << " bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << &Numero3 << std::endl;
	std::cout << std::endl;

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da vari�vel Caractere: " << sizeof(Caractere) << " bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << (void*) &Caractere << std::endl;
	std::cout << std::endl;

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da vari�vel Caractere2: " << sizeof(Caractere2) << " bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << (void *) &Caractere2 << std::endl;
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