#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char tipo;
	int cel, far;

	cout << "que tipo de temperatura queres? ";
	cin >> tipo;
	switch (tipo) {
	case 'C':
		cout << "da me quantos graus celsius: ";
		cin >> cel;
		cout << "em celsius �" << cel << "\n";
		cout << "em fahrenheit �" << (cel * 1,8)+32;
		break;
	case 'F':
		cout << "da me quantos graus fahrenheit: ";
		cin >> far;
		cout << "em fahrenheit � " << far << "\n";
		cout << "em celsius � " << (far - 32)* 5/ 9;
		break;
	default:
		cout << "para de ser burro jp";
	}
}