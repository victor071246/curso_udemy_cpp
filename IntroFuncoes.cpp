#include <iostream>
#include <locale.h>

// O que a fun��o vai retornar?
//tipo de retorno da fun��o
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}



int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero, NumeroASerSomado;
	std::cout << "Digite um n�mero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " com o numero: " << NumeroASerSomado << " ser�: " << SomaAUmNumero(Numero, NumeroASerSomado) << "\n";
	system("PAUSE");
	return 0;
}