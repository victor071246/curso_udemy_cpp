#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);
void AlterarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };

	int TamanhoVetor = std::size(Vetor);

	std::cout << "\nTamanho Vetor: " << TamanhoVetor;

	std::cout << "\nVetor original";
	MostrarVetor(Vetor, TamanhoVetor);
	AlterarVetor(Vetor, TamanhoVetor);
	std::cout << "\nVetor alterado";
	MostrarVetor(Vetor, TamanhoVetor);


	system("PAUSE");
	return 0;
}


void MostrarVetor(int Array[], int TamVetor)
{

	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
	std::cout << "\n\n";
}

void AlterarVetor(int Array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		Array[i] = Array[i] * 2;
	}
}
