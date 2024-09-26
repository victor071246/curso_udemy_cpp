//Na fun��o main() iremos instanciar objetos
//Desta forma ela precisa incluir as declara��es da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "portuguese");
	//Criamos um objeto ContaCliente01 do tipo Conta
	//Est� alocado na Stack
	
	//Como est�, desta forma, o objeto seria criado com o construtor autom�tico
	//Conhecido por construtor Padr�o ou Default
	Conta ContaCliente01("Itau", 2222, 5555, "Marcos", 100000);
	//Agora vai funcionar... Pois temos os argumentos para o construtor

	//Criamos um objeto ContaCliente02 do tipo Conta
	//Est� alocado na Stack
	Conta ContaCliente02;
	//Erro desaparece pois agora tem um construtor vazio

	std::cout << "Endereco memoria objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "Endereco memoria objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();



	ContaCliente01.SetBanco("Bradesco");
	//A string "Bradesco" foi enviada como par�metro para fun��o SetBanco
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//O objeto ContaCliente02 ser� enviado como argumento para a fun��o transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);



	system("PAUSE");
	return 0;
}