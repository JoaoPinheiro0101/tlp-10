#include<iostream>
using namespace std;
void main()
{
    int i, febreFinal[2], temp, normal, febreinicial[2];

    cout << "Diz me qual e a tua temperatura \n";

    for (i = 0; i < 2; i++)
    {
        cin >> febreinicial[i];

    }
    for (i = 0; i < 2; i++)
    {
        cin >> febreFinal[i];
    }
    if (febreFinal[0] < 37)
    {
        cout << "normal \n";
    }
    else
    {
        if (febreFinal[0] == febreinicial[0])
        {
            if (febreFinal[1] > febreinicial[1])
            {
                cout << "aumentou \n";
            }
            else if (febreFinal[1] < febreinicial[1])
            {
                cout << "diminuiu \n";
            }
            else
            {
                cout << "manteve \n";
            }
        }

    }
}