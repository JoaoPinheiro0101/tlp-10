#include<iostream>
using namespace std;
void main()
{
	int i, n1[5], n2,numeros;
	cout << "da me 5 numeros a tua escolha \n";
	for (i = 0; i < 5; i++)
		{
			cin >> n1[i];
	if (n1[i] % 2 == 0)
		{
		cout << "o numero  " << n1[i] << "par " <<  "\n";
	}
	else
		{
		cout << "o numero  " << n1[i] << "impar" <<  "\n";
		}
		}
}