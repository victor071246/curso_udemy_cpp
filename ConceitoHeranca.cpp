#include <iostream>

//Classe base, tamb�m chamada de superclasse, classe m�e/pai
class Base
{
//As se��es public, protected e private de uma classe devem ser declaradas nesta ordem.
//Indica que os membros do objeto criado a partir desta classe ter�o acesso direto a todos os atributos e fun��es presentes na se��o public
public:
	void SolicitarNumeros()
	{		
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		//A hamada do m�todo privado da classe dentro da pr�pria classe � permitido
		//N�o � necess�rio que todos os m�todos sejam p�blicos. Neste caso apenas SolicitarNumeros � p�blico e isto basta, pois este � um m�todo que ir� chamar os m�todos privados da classe
		MostrarResultado(Num1, Num2);
	}
//Aqui indica que os membros da se��o privada s� ser�o acess�veis dentro do c�digo da classe. O objeto n�o poder� acessar diretamente estes itens (atributos e fun��es)
private:
	int Num1, Num2;
	float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}

	//Veja que este m�todo s� poder� ser chamado(invocado) dentro do c�digo da classe
	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << std::endl;
	}
};

//Agora declaramos uma classe que herda da classe Base, por�m, ela n�o tem nada e est� vazia
//A classe derivada tamb�m � chamada de subclasse ou classe filha
class Derivada : public Base
{

};

int main()
{
	//Criamos um objeto a partir da classe derivada
	Derivada Obj;
	Obj.SolicitarNumeros();
	//Isso indica que uma classe herda tudo de sua classe Base(Superclasse) mas n�o herda os itens privados da superclasse

	system("PAUSE");
	return 0;
}