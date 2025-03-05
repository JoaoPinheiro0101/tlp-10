#include <iostream>

using namespace std;

void main()
{
	int coodigo[13], i,soma =0,produtos,resto,numerosecreto ;
	cout << "diz me qual o codigo do livro da biblioteca ";
	for (i = 0; i < 13; i++)
	{
		cin >> coodigo[i];
	}
	for (i = 0; i < 12; i++)
	{	
		if (i % 2 == 0)
		{
			soma = soma + coodigo[i] * 1;
		}
		else
		{
			soma = soma + coodigo[i] * 3;
		}
	}
	cout << soma;

	numerosecreto = soma % 10;
	cout << "numero secreto e " << numerosecreto;
}