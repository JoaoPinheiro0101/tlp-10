#include <iostream>

void main()
{
	using namespace std;

	int arroz[10], contador = 0, somador = 0, i, escolher;

	for (i = 0; i < 10; i++)
	{
		cout << "Diz o " << i + 1 << "numero\n";
		cin >> arroz[i];

	}

	cout << "Queres contar os numeros negativos(1) ou queres somar os numeros negativos(2)\n";
	cin >> escolher;

	switch (escolher)
	{
	case 1:

		for (i = 0; i < 10; i++)
		{
			if (arroz[i] < 0)
			{
				contador = contador + 1;
			}
		}
		cout << "Inseriste " << contador << " números negativos";
		break;

	case 2:

		for (i = 0; i < 10; i++)
		{
			if (arroz[i] < 0)
			{
				somador = somador + 1;
			}
		}
		cout << "O somador de todos os negativos é: " << somador << "!!!!";
		break;
	default:
		break;
	}
}