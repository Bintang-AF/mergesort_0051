#include <iostream>
using namespace std;


int arr[20], b[20];

int n;

void input()
{
    while (true)
    {
        cout << "masukkan panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n---------------------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n---------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "array index ke- " << i << " : ";
        cin >> arr[i];
    } 
}


void mergesort(int low, int high)
{

    if (low >= high) // step 1
    {
        return; // step 1.a
    }

    int mid = (low + high) / 2; // step 2
}