#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Voc� pode usar ( ) para iniciar vari�veis com valores literais
	//{ } � inicializa��o uniforme, permite tanto iniciar valores literais (int, float, caractere, quanto valores escalares, como por exemplo: vetores, enums, etc
	int NumeroInteiro{ 12 };
	float NumeroReal {34.56};
	char Caractere{ 'c' };
	//String � uma cadeira de caracteres, � um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{ "Vou aprender C++ e descobrir o lado sombrio da for�a!\n" };
	//%d indica que voc� quer que seja colocado na string:
	//"Valor N�mero Inteiro = %d " o valor da vari�vel NumeroINteiro
	std::printf("Valor N�mero Inteiro = %d Valor N�mero Real = %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "Texto da String: " << Texto << "\n";

	std::printf("O valor do Caractere digitado: %c na tabela ASCII �: %d \n", Caractere, Caractere);
	//%d � chamado de especificador de formato
	//Cada tipo de dado tem um especificador de formato
	//printf � uma fun��o que veio da linguagem c
	return 0;
	system("PAUSE");
}