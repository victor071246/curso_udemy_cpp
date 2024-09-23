#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Vetor[] = { 1, 23, -78, 900, 234 };
	int* ptr;
	//Neste momento ptr passa a apontar para o endereço do Vetor. Lembre-se que o endereço de uma variável é o primeiro endereço da mesma
	//Logo isso é o mesmo que ptr = &Vetor[0];
	//ptr = Vetor;
	ptr = &Vetor[0];
	//O nome de um vetor é o mesmo que &Vetor[0]
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereço: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
	}
	std::cout << "\n**** Endereços com artimética de ponteiros****\n";
	std::cout << "Valor contido em ptr: " << ptr << "\n";
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	//(ptr + 0) pega o endereço de ptr e adiciona zero, logo é o endereço do primeiro elemento do vetor, já que ptr aponta para o primeiro elemento ptr = Vetor ou ptr = &Vetor[0]

	std::cout << "(ptr + 1) END: " << (ptr + 0) << " Valor: " << *(ptr + 1) << "\n";
	//(ptr + 1) pega o endereço de ptr e desloga uma unidade de tamanho do tipo do ponteiro
	//como ptr é do tipo int, ou seja, aponta para variáveis do tipo int, nesta arquitetura ele vai somar 4 bytes ao endereço de ptr

	std::cout << "(ptr + 2) END: " << (ptr + 0) << " Valor: " << *(ptr + 2) << "\n";
	std::cout << "(ptr + 3) END: " << (ptr + 0) << " Valor: " << *(ptr + 3) << "\n";
	std::cout << "(ptr + 4) END: " << (ptr + 0) << " Valor: " << *(ptr + 4) << "\n";
	std::cout << "Valor contido em ptr: " << ptr << "\n";
	//obs: (ptr + 0) é o mesmo que ptr

	ptr++;
	std::cout << "Valor contido em ptr depois de ptr++: " << ptr << "\n";
	//agora mudou pois ptr++ é o mesmo que ptr + 1 que na aritmética de ponteiros é pegar o valor de ptr e somar o tamanho do tipo de dados que ele aponta que no caso é de 4 bytes!

	ptr = &Vetor[3]; //ptr passa a apontar para 900
	ptr--; //decrementa e aponta para -78; ou Vetor[2]
	std::cout << "Valor do apotado por ptr: " << *ptr << "\n";

	ptr = Vetor; // faz com que ptr aponte novamente para o início do vetor
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n";
	}
	std::cout << "\n";
	//Também pode agora colocar o vetor desta forma usando ponteiros
	//*(ptr + i) fará o mesmo trabalho contido em: *(ptr +1, +2, +3, +4)

	//Porém ficar digitando toda vez desta forma pode ser trabalhoso
	//Logo podemos substituir *(ptr + i) simplesmente por ptr[i]
	//Ou seja ptr[i] é o mesmo que *(ptr + i)

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << ptr[i] << "\n";
	}
	//Isso nos leva a seguinte conclusão:
	//Vetor[i] também é o mesmo que &Vetor[0]
	//*(Vetor + i) é o mesmo que *(&Vetor[0] + i);
	//*(&Vetor[0] + 2) é o mesmo que Vetor[2];
	std::cout << "*(&Vetor[0] + 2) = " << *(&Vetor[0] + 2) << " é o mesmo que Vetor[2] = " << Vetor[2] << "\n"; 

	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << *(Vetor + i) << " ";
	}
	std::cout << " ] \n";

	system("PAUSE");
	return 0;
}