/*Crie uma variável de nome Numero do Tipo inteiro e valor inicial igual a 234;
Crie um ponteiro de nome Ponteiro capaz de apontar para um variável do tipo inteiro.
Troque o valor de Numero para 1456 usando Ponteiro
Coloque o valor de Numero na tela usando Ponteiro
Mostre o endereço da memória RAM em que estão carregados, alocados as variáveis Ponteiro e Numero
Crie um outro ponteiro de nome OutroPtr
Faça OutroPtr apontar para a mesma variável que ptr aponta. 
Usando Ponteiro some 200 ao valor contido em Numero
Usando OutroPtr coloque na tela o valor de Numero*/
#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 234;
	int* Ponteiro = &Numero;

	std::cout << "O valor de Numero é: " << Numero << "\n";

	*Ponteiro = 1456;

	std::cout << "O valor de Numero é: " << *Ponteiro << "\n";

	std::cout << "\nO endereço de Numero na memória RAM é: " << &Numero << "\n";

	std::cout << "\nO endereço de Numero na memória RAM é: " << &Ponteiro << "\n";

	int* OutroPtr = Ponteiro;

	*Ponteiro += 200;

	std::cout << "\nO valor de Numero é: " << Numero << "\n";




	system("PAUSE");
	return 0;
}



