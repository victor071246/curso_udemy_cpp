#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Você pode usar ( ) para iniciar variáveis com valores literais
	//{ } é inicialização uniforme, permite tanto iniciar valores literais (int, float, caractere, quanto valores escalares, como por exemplo: vetores, enums, etc
	int NumeroInteiro{ 12 };
	float NumeroReal {34.56};
	char Caractere{ 'c' };
	//String é uma cadeira de caracteres, é um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{ "Texto da String" };
	//%d indica que você quer que seja colocado na string:
	//"Valor Número Inteiro = %d " o valor da variável NumeroINteiro
	std::printf("Valor Número Inteiro = %d Valor Número Real = %.2f - Caractere: %c - Texto: %s", NumeroInteiro, NumeroReal, Caractere, Texto);
	//%d é chamado de especificador de formato
	//Cada tipo de dado tem um especificador de formato
	//printf é uma função que veio da linguagem c
	return 0;
	system("PAUSE");
}