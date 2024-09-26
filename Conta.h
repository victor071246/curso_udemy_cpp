#pragma once
#include <iostream>
#include <string>

//Este � o arquivo .h � onde existem apenas as declara��es dos atributos e m�todos da classe. Aqui n�o existem as defini��es, implementa��es das fun��es, pois isso ser� feito no arquivo .cpp. � a separa��o do O QU� (.h) do COMO (.cpp)

class Conta
{
//indica que o acesso a estes membros abaixo de private:
//s� ser� permitido de dentro do c�digo da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo;
//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do c�digo da classe Conta.
public:
	//Construtor com par�metros. Desta forma podemos criar objetos e j� enviar argumentos para serem inicializados nos atributos(vari�veis) do objeto

	//O construtor padr�o ou default � simplesmente um construtor vazio
	//Conta();
	//Este construtor � criado autom�ticamente pelo compilador se voc� N�O CRIAR um construtor para sua classe.
	//Contudo como criamos abaixo um construtor o compilador deixou de criar o construtor e por isso n�o podemos mais criar objetos sem ser atrav�s deste construtor abaixo:
	//E a� precisaria enviar argumentos iniciais

	Conta();

	Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Salario);

	~Conta();

	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o par�metro Destino recebe apenas uma c�pia do valor do objeto. Ele n�o tem como alterar o objeto
	//Pois s� recebeu uma c�pia dele
	//Logo podemos usar o conceito de refer�ncia para passar a refer�ncia do objeto e com isso Destino vai poder alterar este objeto pois ser� realizada uma passagem de argumentos por Refer�ncia e n�o mais por valor
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);
};
