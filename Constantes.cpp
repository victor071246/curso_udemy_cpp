#include <iostream>
#include <tchar.h>
//Define � abaixo do include
//#define NUM_VIDAS 10
//Observe que n�o tem ;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de vidas: " << TotalDeVidas << std::endl;
	std::cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endere�o de mem�ria de NUM_VIDAS: " << &NUM_VIDAS << "\n";
	system("PAUSE");

}