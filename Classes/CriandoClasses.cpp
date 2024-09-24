#include <iostream>

class Casa
{
	//Estes s�o os atributos, as propriedades da classe e s�o representados por vari�veis.
	//Estes atributos ser�o as caracter�sticas de cada objeto criado a partir desta clase
	//Quando o programa estiver sendo executado e queremos saber qual � a situa��o do objeto em rela��o ao valor de seus atrivutos dizemos que queremos saber o ESTADO do objeto

	//Por padr�o em uma classe a visibilidade � do tipo private
	//Logo se n�o for indicado nenhuma visibilidade, o padr�o � ser private(privado)
public:
	//private: est� indicando que estes atributos s� poder�o ser acessados diretamente no c�digo da classe Casa
	int NumQuartos = 4;
	float Tamanho = 90.0f;
	bool bTemSuite = true;
	//No geral voc� coloca b na frente de uma vari�vel bool para indicar que ela � do tipo booleano(bool)

	//Estas s�o as opera��es da classe, os m�todos ou as "fun��es" que o objeto poder� executar quando for criado(instanciado) a partir desta classe.

//public significa que o conte�do estar� acess�vel fora do c�digo da classe
public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	//Melhor � criar um m�todo para que seja alterado o n�mero de quartos
	//Seguindo a regra que voc� vai estabelecer na regra de neg�cios do sistema
	//Por exemplo, se o m�ximo de quartos for 6
}; // Este � o c�digo da classe. Voc� poder� indicar que tipo de visibilidade ter� partes deste c�digo

int main()
{
	setlocale(LC_ALL, "portuguese");
	//Assim como voc� declara vari�veis do tipo int, char, float, double, etc, voc� tamb�m pode declarar vari�veis tendo como um tipo uma classe
	//Se for do tipo int o compilador vai criar na mem�ria um local capaz e desenhado para receber um inteiro. Como agora voc� pediu para criar uma regi�o da mem�ria do tipo classe Casa, o compilador vai criar uma regi�o na mem�ria de nome CasaDePraia e que cont�m tanto os atributos como as fun��es de casa
	Casa CasaDePraia;
	//Como a fun��o main est� fora do c�digo da classe, dentro dela n�o ser� poss�vel acessar membros privados da classe Casa!
	//Contudo poder� ser acessado os membros publics(p�blicos)
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\nN�mero de quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\nTem su�te: ";
	CasaDePraia.TemSuite() ? std::cout << "sim" : std::cout << "n�o" << "\n";
	//Para acessar os membros da classe Casa usamos neste caso a nota��o ponto.
	//NomeDoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoM�todo
	std::cout << "\n";
	//Observe que acessar diretamente este atributo � complicado
	//Outra classe ou m�todo pode alterar o valor para algo errado!
	//O ideal � manter os atributos da calsse escondidos, privados e acess�veis apenas dentro da classe.
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nN�mero de quartos inv�lido\n";
	}
}
