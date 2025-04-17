#include <iostream>
using namespace std;

int arr[20], B[20]; // Array utama dan array bantu
int n;

void input()
{
    while(true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;
        if (n <= 20)
        break;
        cout << "\nMaksimal panjang array adalah 20" << endl;
    }

    cout <<
    "\n----------" << endl;
    cout << "Inputkan isi elemen array" << endl;
    cout << "----------"
}