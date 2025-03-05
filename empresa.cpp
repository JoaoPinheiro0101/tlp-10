#include <iostream>
using namespace std;
void main()
{
	int preco;
	float produto = 7.5, preco = 7.5, valor;
	cout << "quantos queres encomendar?";
	cin >> preco; valor = preco * produto;

	if (preco < 100)
	{
		produto = produto;
		cout << "desconto de 0%" << " preco e " << valor;

	}

	else if (preco >= 1000)
	{
		valor = valor - produto * 0.1;
		cout << "desconto de 10% " << " pagaste  " << valor;
	}
	else if (preco >= 100)
	{
		valor = valor - produto * 0.05;
		cout << "desconto de 5%" << ", pagaste " << valor;
	}
}