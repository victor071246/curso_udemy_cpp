#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"
//#include <> vai procurar no diret�rio padr�o include do compilador. J� #include "" procura no diret�rio corrente, atual do seu programa.

//Aqui � COMO? Como as fun��es do arquivo .h ser�o implementadas.
//Neste arquivo .cpp voc� coloca a implementa��o de todas as fun��es do arquivo .h relacionado
//Implementa��o das fun��es


//A fun��o n�o retorna nada, logo o tipo de retorno � vazio (void). Al�m disso a fun��o n�o possui nenhuma vari�vel local(par�metros). Como n�o retorna nada, nao precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	do // as instru��es abaixo ser�o executadas pelo menos uma vez
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "1 - Para meia entrada\n";
		std::cout << "2 - Para entrada inteira \n";
		std::cout << "3 - Sair\n";
		//Aqui a fun��o chama outra fun��o e passa como argumento para a fun��o ProcessarEscolha a vari�vel escolha que cont�m o que foi digitado pelo usu�rio como op��o de escolha

		//Aqui a fun��o processar escolha deve receber como par�metro um inteiro. Colocamos abaixo a chamada da fun��o RetornarEscolha que ao ser executada ir� retornar (Return) um inteiro que foi digitado plo usu�rio
		ProcessarEscolha(RetornarEscolha());




	} while (RetornarEscolha() != 3);//Enquanto escolha for diferente de 3 o menu vai aparecer! Pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	return escolha;
}



//ProcessarEscolha recebe como par�metro um n�mero inteiro e armazena este argumento passado no par�metro TipoEscolha, que � uma vari�vel local � esta fun��o. Quando a fun��o chegar a seu final esta vari�vel deixa de existir na mem�ria.
//Portanto fun��es s�o fundamentais para otimizar o uso de mem�ria, pois se todas estas vari�veis estivessem na fun��o main elas somente seriam destruidas quando o programa fosse fechado.
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
	default: std::cout << "\nOp��o inv�lida!!!\n";

	}
	return TipoEscolha;
}
