#include <iostream>

void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();



//Vari�vel Est�tica, ser� armazenada na regi�o de mem�ria da RAM estimada para vari�veis globais
int VarGlobal{ 10 };
int main()
{
	//Como main() � uma fun��o a vari�vel VarMain � local � fun��o main(), portanto esta vari�vel ser� armazenada na regi�o de mem�ria destinada a vari�veis locais e chamada de fun��es ( STACK - PILHA )
	int VarMain{ 00 };
	Funcao01();

	system("PAUSE");
	return 0;
}

void Funcao01()
{
	Funcao02();

	int Var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "\n Chamando Funcao01\n";
	std::cout << "\n Endere�o Var01: " << &Var01 << "\n";
	VarEstatica++;
	std::cout << "\nValor VarEstatic: " << VarEstatica << std::endl;
}

void Funcao02()
{
	Funcao03();

	int Var02{ 02 };
	std::cout << "\n Chamando Funcao02\n";
	std::cout << "\n Endere�o Var02: " << &Var02 << "\n";
}

void Funcao03()
{
	Funcao04();
	int Var03{ 03 };
	std::cout << "\n Chamando Funcao03\n";
	std::cout << "\n Endere�o Var03: " << &Var03 << "\n";
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "\n Chamando Funcao04\n";
	std::cout << "\n Endere�o Var04: " << &Var04 << "\n";
}
