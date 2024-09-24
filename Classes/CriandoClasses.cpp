#include <iostream>

class Casa
{
	//Estes são os atributos, as propriedades da classe e são representados por variáveis.
	//Estes atributos serão as características de cada objeto criado a partir desta clase
	//Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação ao valor de seus atrivutos dizemos que queremos saber o ESTADO do objeto

	//Por padrão em uma classe a visibilidade é do tipo private
	//Logo se não for indicado nenhuma visibilidade, o padrão é ser private(privado)
public:
	//private: está indicando que estes atributos só poderão ser acessados diretamente no código da classe Casa
	int NumQuartos = 4;
	float Tamanho = 90.0f;
	bool bTemSuite = true;
	//No geral você coloca b na frente de uma variável bool para indicar que ela é do tipo booleano(bool)

	//Estas são as operações da classe, os métodos ou as "funções" que o objeto poderá executar quando for criado(instanciado) a partir desta classe.

//public significa que o conteúdo estará acessível fora do código da classe
public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	//Melhor é criar um método para que seja alterado o número de quartos
	//Seguindo a regra que você vai estabelecer na regra de negócios do sistema
	//Por exemplo, se o máximo de quartos for 6
}; // Este é o código da classe. Você poderá indicar que tipo de visibilidade terá partes deste código

int main()
{
	setlocale(LC_ALL, "portuguese");
	//Assim como você declara variáveis do tipo int, char, float, double, etc, você também pode declarar variáveis tendo como um tipo uma classe
	//Se for do tipo int o compilador vai criar na memória um local capaz e desenhado para receber um inteiro. Como agora você pediu para criar uma região da memória do tipo classe Casa, o compilador vai criar uma região na memória de nome CasaDePraia e que contém tanto os atributos como as funções de casa
	Casa CasaDePraia;
	//Como a função main está fora do código da classe, dentro dela não será possível acessar membros privados da classe Casa!
	//Contudo poderá ser acessado os membros publics(públicos)
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\nNúmero de quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\nTem suíte: ";
	CasaDePraia.TemSuite() ? std::cout << "sim" : std::cout << "não" << "\n";
	//Para acessar os membros da classe Casa usamos neste caso a notação ponto.
	//NomeDoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoMétodo
	std::cout << "\n";
	//Observe que acessar diretamente este atributo é complicado
	//Outra classe ou método pode alterar o valor para algo errado!
	//O ideal é manter os atributos da calsse escondidos, privados e acessíveis apenas dentro da classe.
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
		std::cout << "\nNúmero de quartos inválido\n";
	}
}
