#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamanhoVetor);

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//Para enviar um vetor para uma fun��o basta enviar o nome do vetor

	int TamanhoVetor = std::size(Vetor);
	//A partir da Vers�o C++ 17 ou C++ 2017 voc� pode usar std::size
	std::cout << "Tamanho Vetor: " << TamanhoVetor << "\n";

	MostrarVetor(Vetor, TamanhoVetor);
	//Po

	system("PAUSE");
	return 0;
}

//Para receber um vetor, basta colocar o tipo do vetor e [] ou j� com tamanho int Array[10]

void MostrarVetor(int Array[], int TamanhoVetor)
{
	for (int i = 0; i < TamanhoVetor; i++)
	{
		std::cout << "- " << Array[i] << " -\n";
	}
}
