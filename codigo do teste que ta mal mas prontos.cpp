#include <iostream>

using namespace std;

void main()
{
	int i, j,letras, transformar;
	char vogaisP[5] = { 'ap','ep','ip','op','up' }, palavra[100], letras2[100];

	cout << "quantas letras tem a tua palavra \n";
	cin >> letras;

	cout << "qual e a tua palavra? \n";
	cin >> palavra;

	cout << "queres transformar a tua palavra(1) se queres deixar(2) \n";
	cin >> transformar;

	switch (transformar)
	{
	case 1:
		cout << "diz me a palavra que queres transformar \n";
		for (i = 0; i < letras; i++)
		{
			cin >> palavra[i];
		}
		for (i = 0; i < letras; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (palavra[i] == vogaisP[j])
				{
					cout << vogaisP[j] << " ";

				}
				if (letras2[i] == vogaisP[j])
				{
					palavra[i]  + vogaisP[j];

				}
			}
		}
		{
			break;
		}
		case 2:
		{
			cout << "se deixares como esta entao pronto ja ta vai te embora , comer beber agua ou sla... vai dormir puto ja acabaste isto , ninguem te quer mais aqui e tou a escrever isto porque nao consigo fazer mais nada neste codigo horrivel e eu nao vou conseguir ter uma nota boa porque eu sou muito burro mds do ceue toda a gente fez com sla 28 linhas e o meu tem 50 e eu vou ter negativa e chumbar e dps vou ter de repetir de ano tou triste enfim e a vida quem mandou eu ser burro ,a professora diz que eu consigo mas eu sei que nao consigo e nao sei como transcender na programacao ,um dia eu consigo mas porque que eu nao sou intelingente e se ainda estas a ler isto obg por ler tou triste, e a professora tbm disse que quantas menos linhas um codigo tiver melhor o dos outros tem 28 e o meu tem 50 mais uma coisa , mas obg pelo teu tempo se leste tudo es um amigo\n";
		}
		{
			break;
		}
	}
}