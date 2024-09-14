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
	std::string Texto{ "Vou aprender C++ e descobrir o lado sombrio da força!\n" };
	//%d indica que você quer que seja colocado na string:
	//"Valor Número Inteiro = %d " o valor da variável NumeroINteiro
	std::printf("Valor Número Inteiro = %d Valor Número Real = %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "Texto da String: " << Texto << "\n";

	std::printf("O valor do Caractere digitado: %c na tabela ASCII é: %d \n", Caractere, Caractere);
	//%d é chamado de especificador de formato
	//Cada tipo de dado tem um especificador de formato
	//printf é uma função que veio da linguagem c
	return 0;
	system("PAUSE");
}