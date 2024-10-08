#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Vetor[] = { 1, 23, -78, 900, 234 };
	int* ptr;
	//Neste momento ptr passa a apontar para o endere�o do Vetor. Lembre-se que o endere�o de uma vari�vel � o primeiro endere�o da mesma
	//Logo isso � o mesmo que ptr = &Vetor[0];
	//ptr = Vetor;
	ptr = &Vetor[0];
	//O nome de um vetor � o mesmo que &Vetor[0]
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endere�o: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
	}
	std::cout << "\n**** Endere�os com artim�tica de ponteiros****\n";
	std::cout << "Valor contido em ptr: " << ptr << "\n";
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	//(ptr + 0) pega o endere�o de ptr e adiciona zero, logo � o endere�o do primeiro elemento do vetor, j� que ptr aponta para o primeiro elemento ptr = Vetor ou ptr = &Vetor[0]

	std::cout << "(ptr + 1) END: " << (ptr + 0) << " Valor: " << *(ptr + 1) << "\n";
	//(ptr + 1) pega o endere�o de ptr e desloga uma unidade de tamanho do tipo do ponteiro
	//como ptr � do tipo int, ou seja, aponta para vari�veis do tipo int, nesta arquitetura ele vai somar 4 bytes ao endere�o de ptr

	std::cout << "(ptr + 2) END: " << (ptr + 0) << " Valor: " << *(ptr + 2) << "\n";
	std::cout << "(ptr + 3) END: " << (ptr + 0) << " Valor: " << *(ptr + 3) << "\n";
	std::cout << "(ptr + 4) END: " << (ptr + 0) << " Valor: " << *(ptr + 4) << "\n";
	std::cout << "Valor contido em ptr: " << ptr << "\n";
	//obs: (ptr + 0) � o mesmo que ptr

	ptr++;
	std::cout << "Valor contido em ptr depois de ptr++: " << ptr << "\n";
	//agora mudou pois ptr++ � o mesmo que ptr + 1 que na aritm�tica de ponteiros � pegar o valor de ptr e somar o tamanho do tipo de dados que ele aponta que no caso � de 4 bytes!

	ptr = &Vetor[3]; //ptr passa a apontar para 900
	ptr--; //decrementa e aponta para -78; ou Vetor[2]
	std::cout << "Valor do apotado por ptr: " << *ptr << "\n";

	ptr = Vetor; // faz com que ptr aponte novamente para o in�cio do vetor
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n";
	}
	std::cout << "\n";
	//Tamb�m pode agora colocar o vetor desta forma usando ponteiros
	//*(ptr + i) far� o mesmo trabalho contido em: *(ptr +1, +2, +3, +4)

	//Por�m ficar digitando toda vez desta forma pode ser trabalhoso
	//Logo podemos substituir *(ptr + i) simplesmente por ptr[i]
	//Ou seja ptr[i] � o mesmo que *(ptr + i)

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << ptr[i] << "\n";
	}
	//Isso nos leva a seguinte conclus�o:
	//Vetor[i] tamb�m � o mesmo que &Vetor[0]
	//*(Vetor + i) � o mesmo que *(&Vetor[0] + i);
	//*(&Vetor[0] + 2) � o mesmo que Vetor[2];
	std::cout << "*(&Vetor[0] + 2) = " << *(&Vetor[0] + 2) << " � o mesmo que Vetor[2] = " << Vetor[2] << "\n"; 

	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << *(Vetor + i) << " ";
	}
	std::cout << " ] \n";

	system("PAUSE");
	return 0;
}