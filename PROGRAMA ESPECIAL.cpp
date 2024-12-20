#include <iostream>

using namespace std;

void main()
{
	int coelho[20], j, coelho2, contar = 0;

	for (j = 0; j < 20; j++)
	{
		cout << "qual e o" << j + 1 << "nuemero \n";
		cin >> coelho[j];
	}


	cout << "diz me um numero que queiras encontrar \n";
	cin >> coelho2;

	for (j = 0; j < 20; j++)
	{
		if (coelho2 ==coelho[j])
		{
			contar = contar + 1;
		}
	}
	if (contar > 0)
	{
		cout << "esse numero esta no coelho \n";
	}
	else
	{
		cout << "esse numero nao esta  no coelho \n";
	}

	for (j = 0; j < 20; j++)
	{
		if (coelho[j] > contar)
		{
			contar = coelho[j];
		}
	}
}