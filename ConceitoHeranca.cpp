#include <iostream>

//Classe base, também chamada de superclasse, classe mãe/pai
class Base
{
//As seções public, protected e private de uma classe devem ser declaradas nesta ordem.
//Indica que os membros do objeto criado a partir desta classe terão acesso direto a todos os atributos e funções presentes na seção public
public:
	void SolicitarNumeros()
	{		
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		//A hamada do método privado da classe dentro da própria classe é permitido
		//Não é necessário que todos os métodos sejam públicos. Neste caso apenas SolicitarNumeros é público e isto basta, pois este é um método que irá chamar os métodos privados da classe
		MostrarResultado(Num1, Num2);
	}
//Aqui indica que os membros da seção privada só serão acessíveis dentro do código da classe. O objeto não poderá acessar diretamente estes itens (atributos e funções)
private:
	int Num1, Num2;
	float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}

	//Veja que este método só poderá ser chamado(invocado) dentro do código da classe
	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << std::endl;
	}
};

//Agora declaramos uma classe que herda da classe Base, porém, ela não tem nada e está vazia
//A classe derivada também é chamada de subclasse ou classe filha
class Derivada : public Base
{

};

int main()
{
	//Criamos um objeto a partir da classe derivada
	Derivada Obj;
	Obj.SolicitarNumeros();
	//Isso indica que uma classe herda tudo de sua classe Base(Superclasse) mas não herda os itens privados da superclasse

	system("PAUSE");
	return 0;
}