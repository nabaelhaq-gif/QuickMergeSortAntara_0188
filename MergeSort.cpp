#include <iostream>
using namespace std;

//create main array & temporary array
int arr[20], B[20];
//n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal Panjang Array Adalah 20";
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan Isi Element Array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}