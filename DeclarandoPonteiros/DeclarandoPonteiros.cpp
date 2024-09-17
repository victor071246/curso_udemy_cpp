#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Então para declarar uma variável que seja considerada um ponteiro, basta colocar <tipo a ser apontado> *<nome da variável>
	//obs: a posição do asterisco neste caso não importa
	int* ptr;

	//Agora o ponteiro não está com endereço lixo de memória
	//nulloptr é como se fosse um endereço zero, indica que ele não está apontando para lugar algum...
	int* ptr; // da no mesmo
	int Numero{ 101 };

	//Aqui vamos colocar na tela o endereço de memória da variável Número. Ou seja, onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número. Pois ela ocupa 4 endereços, tendo 4 bytes de tamanho

	//Agora queremos colocar o endereço de memória da variável número dentro da variável ponteiro
	//Para colocar algo dentro de uma variável usamos o nome desta variável e o operador atribuição
	//ex:?
	Numero = 102;
	//agora você está solicitando que a variável ponteiro de nome ptr tenha dentro dela o endereço de memória da variável número. Logo ptr conterá o primeiro endereço em que número está alocado na memória RAM
	ptr = &Numero;
	//Se ptr tem o endereço da variável número dentro dele. Ele pode modificar o valor da variável número indiretamente? SIM!!!
	//Como?
	*ptr = 103;// assim?
	//Como está acima você está colocando dentro da variável ptr o endereço 103, assim como é em qualquer variável... Como seria em Numero = 103;
	/*Não é isso que queremos, queremos indicar ao compilador que vá no endereço de memória que está dentro de ptr e altere o valor deste local*/
	
	std::cout << "\nEndereço de Número: " << &Numero;

	//Algo importante aqui: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	//Ou seja, qual lugar da RAM ele está alocado?
	//Veja que nós ainda não estamos colocando na tela nada que esteja dentro das variáveis.
	//Para colocar o que está dentro das variáveis nós usamos apenas o nome da variável!
	//Exemplo std::cout << Numero
	//std::cout << ptr
	std::cout << "\nEndereço de ptr: " << &ptr;
	system("PAUSE");
	return 0;
}