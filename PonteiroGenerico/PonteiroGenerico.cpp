#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };
	//Declarei ponteiro genérico ou vazio (void)
	//Significa que ele não tem ainda um tipo que possa apontar 
	//Isso é útil quando você por exemplo retornar algo de alguma função e atribui a um ponteiro. Neste caso você não sabe de antemão que tipo de dado você vai retornar e assim depois você pode especificar qual tipo de dado o ponteiro void* passará a apontar
	void* ptrG;
	//Agora ptrG passa a apontar para a variável Letra
	//Pois ele recebeu o endereço de memória desta variável
	ptrG = &Letra;
	//Por que deu erro?
	//Lembre que o endereço de uma variável é apenas o primeiro byte dela. O primeiro endereço em que ela está carregada.
	//Assim, como o compilador vai saber como ler a variável?
	//Ex: a partir do endereço 105 eu devo percorrer quantos bytes?
	//Ele só saberá isso quando você indicar o tipo do ponteiro ptrG
	//Por enquanto ele é void!(vazio)
	//Logo, já que Letra é do tipo char, você deve indicar que o ponteiro ptrG está apontando para um char
	//Isso é feito via cast
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";
	//Primeiro você fa o cast e depois você coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//Agora o compilador sabe que deverá ler 1(byte) para colocar um char na tela!
	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG: " << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}