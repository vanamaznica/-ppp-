#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[5];
    string temp;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter surname: ";
        cin >> names[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (names[i] > names[j])
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "sorted surnames:" << endl;

    for (int i = 0; i < 5; i++)
        cout << names[i] << endl;
}