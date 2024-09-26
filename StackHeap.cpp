#include <iostream>

void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();



//Variável Estática, será armazenada na região de memória da RAM estimada para variáveis globais
int VarGlobal{ 10 };
int main()
{
	//Como main() é uma função a variável VarMain é local à função main(), portanto esta variável será armazenada na região de memória destinada a variáveis locais e chamada de funções ( STACK - PILHA )
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
	std::cout << "\n Endereço Var01: " << &Var01 << "\n";
	VarEstatica++;
	std::cout << "\nValor VarEstatic: " << VarEstatica << std::endl;
}

void Funcao02()
{
	Funcao03();

	int Var02{ 02 };
	std::cout << "\n Chamando Funcao02\n";
	std::cout << "\n Endereço Var02: " << &Var02 << "\n";
}

void Funcao03()
{
	Funcao04();
	int Var03{ 03 };
	std::cout << "\n Chamando Funcao03\n";
	std::cout << "\n Endereço Var03: " << &Var03 << "\n";
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "\n Chamando Funcao04\n";
	std::cout << "\n Endereço Var04: " << &Var04 << "\n";
}
