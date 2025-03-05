#include <iostream>
using namespace std;
void main()
{
	int meses[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 },i,escolha;
	for (i = 0; i < 13; i++)
	{
		cin >> escolha;
		cout << "O mes de numero " << escolha << " tem estes dias : " << meses[escolha];
	} 
}