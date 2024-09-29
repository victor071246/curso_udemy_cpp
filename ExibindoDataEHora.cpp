#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>


int main()
{
	//O tipo de dados time_t é usado para representar o tempo de calendário.

	time_t HoraAtual = time(0);
	tm* MinhaHora = localtime(&HoraAtual);
	std::cout << "\nHora: " << 1 + MinhaHora->tm_hour << ":" << 1 + MinhaHora->tm_min << ":" << 1 + MinhaHora-> tm_sec;

	std::cout << "\\Dia: " << MinhaHora->tm_mday;
	std::cout << "\\Mes: " << MinhaHora->tm_mon;
	std::cout << "\\Ano: " << 1900 +  MinhaHora->tm_year;


 	system("PAUSE");
	return 0;
}

//outra opcao
//#include <ctime>
//
//int main()
//{
//	time_t Tempo = time(NULL);
//	std::cout << ctime(&Tempo);
//
//	system("PAUSE");
//	return 0;
//}