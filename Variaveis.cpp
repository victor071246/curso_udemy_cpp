#include <iostream>
#include <tchar.h>

int main()
{	
	//Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Declaração de variáveis
	//Primeiro colocamos qual o tipo de variável que 
	// desejamos que o computador crie ao executar nosso programa
	// Neste caso, escolhemos ambas como integer, ou seja, o local 
	// da memória que estamos solicitando ao computador deve ser capaz 
	// de armazenar números inteiros (-3, -2, -1, 0, 1, 2)
	// Então int numVidas pode ser lido da seguinte forma:
	/*Computador, por favor me forneça um local na memória ram com tamanho
	suficiente para armazenar um número inteiro, coloque o nome deste local 
	como sendo numVidas*/


	int numVidas = 5;
	//Acima o computador irá colocar um espaço de memória do tipo inteiro
	int Pontuacao = 1350;
	std::cout << "*********INICIO DO JOGO***********" << std::endl;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da variável numVidas: " << sizeof(numVidas) << " Bytes\n";
	std::cout << "Tamanho da variável pontuação: " << sizeof(Pontuacao) << " Bytes \n";
	std::cout << "Endereço que NumVidas ocupa na memória ram: " << &numVidas <<  "\n";
	std::cout << "Endereço que Pontuação ocupa na memória ram: " << &Pontuacao << "\n";
	std::cout << "********************" << std::endl;

	std::cout << "*********DURANTE O JOGO***********" << std::endl;
	Pontuacao = Pontuacao + 150;
	numVidas = numVidas - 1;
	std::cout << "Vidas jogador: " << numVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	system("PAUSE");
}