#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"
//#include <> vai procurar no diretório padrão include do compilador. Já #include "" procura no diretório corrente, atual do seu programa.

//Aqui é COMO? Como as funções do arquivo .h serão implementadas.
//Neste arquivo .cpp você coloca a implementação de todas as funções do arquivo .h relacionado
//Implementação das funções


//A função não retorna nada, logo o tipo de retorno é vazio (void). Além disso a função não possui nenhuma variável local(parâmetros). Como não retorna nada, nao precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	do // as instruções abaixo serão executadas pelo menos uma vez
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "1 - Para meia entrada\n";
		std::cout << "2 - Para entrada inteira \n";
		std::cout << "3 - Sair\n";
		//Aqui a função chama outra função e passa como argumento para a função ProcessarEscolha a variável escolha que contém o que foi digitado pelo usuário como opção de escolha

		//Aqui a função processar escolha deve receber como parâmetro um inteiro. Colocamos abaixo a chamada da função RetornarEscolha que ao ser executada irá retornar (Return) um inteiro que foi digitado plo usuário
		ProcessarEscolha(RetornarEscolha());




	} while (RetornarEscolha() != 3);//Enquanto escolha for diferente de 3 o menu vai aparecer! Pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	return escolha;
}



//ProcessarEscolha recebe como parâmetro um número inteiro e armazena este argumento passado no parâmetro TipoEscolha, que é uma variável local à esta função. Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main elas somente seriam destruidas quando o programa fosse fechado.
int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nMeia entrada comprada\n";
		break;
	case 2: std::cout << "\nEntrada inteira comprada\n";
		break;
	case 3: std::cout << "\nSaindo menu tickets\n";
		break;
	default: std::cout << "\nOpção inválida!!!\n";

	}
	return TipoEscolha;
}
