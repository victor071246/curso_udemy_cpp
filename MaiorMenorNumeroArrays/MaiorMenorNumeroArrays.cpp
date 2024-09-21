#include <iostream>

/*ENTRADA: Receba n�mero elementos desejados (m�ximo de 20)
PROCESSAMENTO:
 - Armazena estes dados em um array.
 - Encontrar maior e o menor elemento desse array
SA�DA: mostre na tela o maior e o menor elemento desse array
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumElementos;
	int Array[20];
	int Min, Max;

	std::cout << "Digite o n�mero de elementos desejado: ";
	std::cin >> NumElementos;

	//Se o usu�rio digitar 14, o vetor vai de �ndice 0 at� 13, logo i precisa ser menor que 14 ou seja, i < NumElementos

	for (int i = 0; i < NumElementos; i++)
	{
		//primeiro vamos receber o vetor, a entrada de dados
		std::cout << "Digite o elemento " << (i + 1) << ": ";
		std::cin >> Array[i];
		system("CLS");
	}
	Min = Array[0];
	Max = Array[0];
	int &TamanhoArray = NumElementos;

	for (int i = 0; i < TamanhoArray; i++)
	{
		if (Array[i] < Min) {
			Min = Array[i];
		}
		if (Array[i] > Max)
		{
			Max = Array[i];
		}
	}
	std::cout << "O maior valor inserido no array �: " << Max << "\n";
	std::cout << "O menor valor inserido no array �: " << Min << "\n";

	system("PAUSE");
	return 0;
}