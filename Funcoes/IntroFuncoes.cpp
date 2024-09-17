#include <iostream>
#include <locale.h>

// O que a função vai retornar?
//tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Cheamos bem...\n";
	return;
	std::cout << "\nMensagem de Marte... Cheamos bem 2...\n";
	return;
}



int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero, NumeroASerSomado, RetornoDaFuncao;
	Mensagem();
	std::cout << "Digite um número: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " com o numero: " << NumeroASerSomado << " será: " << SomaAUmNumero(Numero, NumeroASerSomado) << "\n";
	RetornoDaFuncao = SomaAUmNumero(200, -500);
	std::cout << "Soma de 200 com - 500: " << RetornoDaFuncao;

	std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400)) << "\n";

	system("PAUSE");
	return 0;
}