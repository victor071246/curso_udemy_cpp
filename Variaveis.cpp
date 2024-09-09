#include <iostream>
#include <tchar.h>

int main()
{	
	//Fun��o que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Declara��o de vari�veis
	//Primeiro colocamos qual o tipo de vari�vel que 
	// desejamos que o computador crie ao executar nosso programa
	// Neste caso, escolhemos ambas como integer, ou seja, o local 
	// da mem�ria que estamos solicitando ao computador deve ser capaz 
	// de armazenar n�meros inteiros (-3, -2, -1, 0, 1, 2)
	// Ent�o int numVidas pode ser lido da seguinte forma:
	/*Computador, por favor me forne�a um local na mem�ria ram com tamanho
	suficiente para armazenar um n�mero inteiro, coloque o nome deste local 
	como sendo numVidas*/


	int numVidas = 5;
	//Acima o computador ir� colocar um espa�o de mem�ria do tipo inteiro
	int Pontuacao = 1350;
	std::cout << "*********INICIO DO JOGO***********" << std::endl;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Tamanho da vari�vel numVidas: " << sizeof(numVidas) << " Bytes\n";
	std::cout << "Tamanho da vari�vel pontua��o: " << sizeof(Pontuacao) << " Bytes \n";
	std::cout << "Endere�o que NumVidas ocupa na mem�ria ram: " << &numVidas <<  "\n";
	std::cout << "Endere�o que Pontua��o ocupa na mem�ria ram: " << &Pontuacao << "\n";
	std::cout << "********************" << std::endl;

	std::cout << "*********DURANTE O JOGO***********" << std::endl;
	Pontuacao = Pontuacao + 150;
	numVidas = numVidas - 1;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	system("PAUSE");
}