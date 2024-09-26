//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Você pode usar o construtor padrão para já iniciar os atributos do objeto com algum valor padrão e evitar lixo de memória
Conta::Conta(){
	//Aqui mais uma vez o this está implícito
	//Seria o mesmo que:
	Banco = "";
	Agencia = 0;
	NumConta = 0;
	Titular = "";
	Saldo = 0.0;
	std::cout << "\nConstrutor objeto endereço: " << this << " executado!\n";
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
	std::cout << "\nConstrutor objeto endereço: " << this << " executado!\n";
}

Conta::~Conta()
{
	std::cout << "\nDestrutor objeto endereço: " << this << " executado!\n";
}

//Aqui o operador escopo:: está indicando que a função/método sacar pertence a classe Conta e que este código a seguir vair implementar a função Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do saldo no objeto for menor que o valor a ser sacado, ele não poderá sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo insuficiente!\n";
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		//Senão, ele poderá sacar
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
	std::cout << "\n Depósito de R$ " << Valor << " efetuado com suesso!\n";
}

//A função recebe como argumentos para seus parâmetros um objeto do tipo Conta e um valor double.

//Aqui o parâmetro de Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
//Isso é o mesmo que colocar Conta &Destino = ContaCliente02;
//Ou seja, destino nada mais é do que uma referência para um objeto do tipo conta que neste caso é ContaCliente02
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo insuficiente";
	}
	else
	{
		//Aqui Destino estará com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência realizada com sucesso \n";
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
	//Assim como aqui também está implícito
	return Titular;
	//No geral não colocamos this, somente quando é necessário
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro o endereco: " << this << "\n";
}

void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber quem é quem se Banco é váriável local ou o atributo da classe Conta
	//Se this é um ponteiro para chegar no apontado pelo ponteiro temos
	//*this, mas como this é um ponteiro para um objeto ele precisa usar

	//Agora o compilador sabe que Banco é a variável local que recebeu o argumento string e que deve ser colocado no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo, no geral, usa-se a notação flecha
	this->Banco = Banco;
	//Aqui o atributo do objeto cujo endereço está em this irá receber o valor de SetBanco
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetTitular(std::string NomeTitular)
{
	//Aqui não precisaria pois os nomes são diferentes
	//Mas como o compilador sabe que titular pertence ao objeto que está executando a função?
	//Está implícito neste caso o this
	this->Titular = NomeTitular;
}

//Neste caso precisamos do this pois o nome dos parâmetros são iguais
void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}
