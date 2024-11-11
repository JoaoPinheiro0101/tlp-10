#include <locale.h>
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Portuguese");

	using namespace std;
	int operacao;
	int n1, n2;

	cout << "queres fazer qual operação?\n1: somar\n2: diminuir \n3: multiplicar\n4: dividir\nescolhe-->";
	cin >> (operacao);
	cout << "dá me o primeiro número: ";
	cin >> n1;
	cout << "dá me o segundo número: ";
	cin >> n2;
	switch (operacao){
		case 1:
			cout << n1 << "+" << n2 << "=" << n1 + n2;
			break;
		case 2:
			cout << n1 << "-" << n2 << "=" << n1 - n2;
			break;
		case 3:
			cout << n1 << "x" << n2 << "=" << n1 * n2;
			break;
		case 4:
			cout << n1 << "/" << n2 << "=" << n1 / n2;
			break;
	}          
}