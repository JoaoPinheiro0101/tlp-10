#include <iostream>
using namespace std;
void main()
{
    int deslocamento, i, tamanho, j, local = 0;
    char abc[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' },
        frase[100];
   
    cout << "Diz me o deslocamento que deseja \n";
    cin >> deslocamento;

    cout << "Diz me o tamanho da frase a contar com os espacos \n";
    cin >> tamanho;

    cout << "Escreve a frase que deseja codificar \n";

    for (i = 0; i < tamanho; i++)
    {
        cin >> frase[i];
    }
    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (frase[i] == abc[j])
            {

                if (j + deslocamento > 25)
                {
                    cout << abc[((j + deslocamento - 1) % 25)];
                }
                else
                {
                    cout << abc[j + deslocamento];
                }
            }
        }

    }

}