#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6]; // membuat array kosong
    int pnjg = 0; // membuat variabel panjang untuk array

    arr[pnjg++] = 3; // memasukkan elemen ke array
    arr[pnjg++] = 7;
    arr[pnjg++] = 5;
    arr[pnjg++] = 8;

    for (int i=0; i<pnjg; i++) { // mencetak array dengan mengiterasikannya
        cout << arr[i] << " ";
    }
    cout << endl;

    // -- memasukkan elemen di paling depan array --

    for (int i=pnjg; i>=0; i--) { // menggeser elemen array ke kanan
        arr[i+1] = arr[i];
    }
    pnjg++; // menambah panjang array

    arr[0] = 9; // memasukkan elemen di paling depan array

    for (int i=0; i<pnjg; i++) { // mencetak array dengan mengiterasikannya
        cout << arr[i] << " ";
    }
    cout << endl;
}
