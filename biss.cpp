#include<iostream>
void main()
{
	using namespace std;
	cout << "Diz o ano:";
	int ano;
	cin >> ano;
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
	{
		cout << "Ano bissexto";
	}
	else
	{
		cout << "Ano não bissexto";
	}
}