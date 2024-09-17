#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Ent�o para declarar uma vari�vel que seja considerada um ponteiro, basta colocar <tipo a ser apontado> *<nome da vari�vel>
	//obs: a posi��o do asterisco neste caso n�o importa
	int* ptr;

	//Agora o ponteiro n�o est� com endere�o lixo de mem�ria
	//nulloptr � como se fosse um endere�o zero, indica que ele n�o est� apontando para lugar algum...
	int* ptr; // da no mesmo
	int Numero{ 101 };

	//Aqui vamos colocar na tela o endere�o de mem�ria da vari�vel N�mero. Ou seja, onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero. Pois ela ocupa 4 endere�os, tendo 4 bytes de tamanho

	//Agora queremos colocar o endere�o de mem�ria da vari�vel n�mero dentro da vari�vel ponteiro
	//Para colocar algo dentro de uma vari�vel usamos o nome desta vari�vel e o operador atribui��o
	//ex:?
	Numero = 102;
	//agora voc� est� solicitando que a vari�vel ponteiro de nome ptr tenha dentro dela o endere�o de mem�ria da vari�vel n�mero. Logo ptr conter� o primeiro endere�o em que n�mero est� alocado na mem�ria RAM
	ptr = &Numero;
	//Se ptr tem o endere�o da vari�vel n�mero dentro dele. Ele pode modificar o valor da vari�vel n�mero indiretamente? SIM!!!
	//Como?
	*ptr = 103;// assim?
	//Como est� acima voc� est� colocando dentro da vari�vel ptr o endere�o 103, assim como � em qualquer vari�vel... Como seria em Numero = 103;
	/*N�o � isso que queremos, queremos indicar ao compilador que v� no endere�o de mem�ria que est� dentro de ptr e altere o valor deste local*/
	
	std::cout << "\nEndere�o de N�mero: " << &Numero;

	//Algo importante aqui: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//Ou seja, qual lugar da RAM ele est� alocado?
	//Veja que n�s ainda n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//Para colocar o que est� dentro das vari�veis n�s usamos apenas o nome da vari�vel!
	//Exemplo std::cout << Numero
	//std::cout << ptr
	std::cout << "\nEndere�o de ptr: " << &ptr;
	system("PAUSE");
	return 0;
}