//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar as declara��es da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Voc� pode usar o construtor padr�o para j� iniciar os atributos do objeto com algum valor padr�o e evitar lixo de mem�ria
Conta::Conta(){
	//Aqui mais uma vez o this est� impl�cito
	//Seria o mesmo que:
	Banco = "";
	Agencia = 0;
	NumConta = 0;
	Titular = "";
	Saldo = 0.0;
	std::cout << "\nConstrutor objeto endere�o: " << this << " executado!\n";
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
	std::cout << "\nConstrutor objeto endere�o: " << this << " executado!\n";
}

Conta::~Conta()
{
	std::cout << "\nDestrutor objeto endere�o: " << this << " executado!\n";
}

//Aqui o operador escopo:: est� indicando que a fun��o/m�todo sacar pertence a classe Conta e que este c�digo a seguir vair implementar a fun��o Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do saldo no objeto for menor que o valor a ser sacado, ele n�o poder� sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		//Sen�o, ele poder� sacar
		//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	//Saldo = Saldo + Valor;
	std::cout << "\n Dep�sito de R$ " << Valor << " efetuado com suesso!\n";
}

//A fun��o recebe como argumentos para seus par�metros um objeto do tipo Conta e um valor double.

//Aqui o par�metro de Destino ir� receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
//Isso � o mesmo que colocar Conta &Destino = ContaCliente02;
//Ou seja, destino nada mais � do que uma refer�ncia para um objeto do tipo conta que neste caso � ContaCliente02
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente";
	}
	else
	{
		//Aqui Destino estar� com o objeto passado para a fun��o
		//Logo vai chamar o m�todo Depositar desta fun��o
		Destino.Depositar(Valor);
		//Depois de depositar voc� deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transfer�ncia realizada com sucesso \n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	//Assim como aqui tamb�m est� impl�cito
	return Titular;
	//No geral n�o colocamos this, somente quando � necess�rio
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro o endereco: " << this << "\n";
}

void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber quem � quem se Banco � v�ri�vel local ou o atributo da classe Conta
	//Se this � um ponteiro para chegar no apontado pelo ponteiro temos
	//*this, mas como this � um ponteiro para um objeto ele precisa usar

	//Agora o compilador sabe que Banco � a vari�vel local que recebeu o argumento string e que deve ser colocado no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo, no geral, usa-se a nota��o flecha
	this->Banco = Banco;
	//Aqui o atributo do objeto cujo endere�o est� em this ir� receber o valor de SetBanco
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetTitular(std::string NomeTitular)
{
	//Aqui n�o precisaria pois os nomes s�o diferentes
	//Mas como o compilador sabe que titular pertence ao objeto que est� executando a fun��o?
	//Est� impl�cito neste caso o this
	this->Titular = NomeTitular;
}

//Neste caso precisamos do this pois o nome dos par�metros s�o iguais
void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}
