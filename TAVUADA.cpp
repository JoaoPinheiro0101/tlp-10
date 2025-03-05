#include<iostream>
using namespace std;
void main()
{
	int tabuadas, i,escolha;
	cout << "diz me um numero \n";
	cin >> tabuadas;
	cout << "Ate onde queres multiplicar" << "\n";
	cin >> escolha;

	for (i = 0; i < escolha; i++)
	{
		cout << tabuadas * i << "\n";
	}
}