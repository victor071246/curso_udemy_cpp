/*Crie uma vari�vel de nome Numero do Tipo inteiro e valor inicial igual a 234;
Crie um ponteiro de nome Ponteiro capaz de apontar para um vari�vel do tipo inteiro.
Troque o valor de Numero para 1456 usando Ponteiro
Coloque o valor de Numero na tela usando Ponteiro
Mostre o endere�o da mem�ria RAM em que est�o carregados, alocados as vari�veis Ponteiro e Numero
Crie um outro ponteiro de nome OutroPtr
Fa�a OutroPtr apontar para a mesma vari�vel que ptr aponta. 
Usando Ponteiro some 200 ao valor contido em Numero
Usando OutroPtr coloque na tela o valor de Numero*/
#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 234;
	int* Ponteiro = &Numero;

	std::cout << "O valor de Numero �: " << Numero << "\n";

	*Ponteiro = 1456;

	std::cout << "O valor de Numero �: " << *Ponteiro << "\n";

	std::cout << "\nO endere�o de Numero na mem�ria RAM �: " << &Numero << "\n";

	std::cout << "\nO endere�o de Numero na mem�ria RAM �: " << &Ponteiro << "\n";

	int* OutroPtr = Ponteiro;

	*Ponteiro += 200;

	std::cout << "\nO valor de Numero �: " << Numero << "\n";




	system("PAUSE");
	return 0;
}



