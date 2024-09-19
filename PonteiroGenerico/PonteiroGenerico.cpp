#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };
	//Declarei ponteiro gen�rico ou vazio (void)
	//Significa que ele n�o tem ainda um tipo que possa apontar 
	//Isso � �til quando voc� por exemplo retornar algo de alguma fun��o e atribui a um ponteiro. Neste caso voc� n�o sabe de antem�o que tipo de dado voc� vai retornar e assim depois voc� pode especificar qual tipo de dado o ponteiro void* passar� a apontar
	void* ptrG;
	//Agora ptrG passa a apontar para a vari�vel Letra
	//Pois ele recebeu o endere�o de mem�ria desta vari�vel
	ptrG = &Letra;
	//Por que deu erro?
	//Lembre que o endere�o de uma vari�vel � apenas o primeiro byte dela. O primeiro endere�o em que ela est� carregada.
	//Assim, como o compilador vai saber como ler a vari�vel?
	//Ex: a partir do endere�o 105 eu devo percorrer quantos bytes?
	//Ele s� saber� isso quando voc� indicar o tipo do ponteiro ptrG
	//Por enquanto ele � void!(vazio)
	//Logo, j� que Letra � do tipo char, voc� deve indicar que o ponteiro ptrG est� apontando para um char
	//Isso � feito via cast
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";
	//Primeiro voc� fa o cast e depois voc� coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//Agora o compilador sabe que dever� ler 1(byte) para colocar um char na tela!
	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG: " << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}