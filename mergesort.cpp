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

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergesort(low, mid);    //step 3.a 
    mergesort(mid + 1, high);// step 3.b

    //step 4
    int i = low;     //step 4.a
    int j = mid + 1;     //step 4.b
    int k = low;     //step 4.c

    while (i <= mid && j <= high ) //step 4.d
    {
        if (arr[i] <= arr[j]) //step 4.d.i
        {
            b[k] = arr[j];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++; //step 4.d.ii
    }

    while (j <= high) //step 4.e
    {
        b[k] = arr[j]; // step 4.e.i
        j++;           // step 4.e.ii
        k = k + 1;     // step 4.e.iii
    }

    while (i <= mid) // step 4.f
    {
        b[k] = arr[i]; // step 4.f.i
        i++;           // step 4.f.ii
        k++;           // step 4.f.iii
    }

    //step 5
    for (int x = low; x <= high; x++)
    {
        arr[x] = b[x];
    }
}
