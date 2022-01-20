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

    // -- memasukkan elemen di tengah array --

    int sisip = 2; // variabel index yang ingin disisipkan elemen baru
    for (int i=pnjg; i>=sisip; i--) { // menggeser elemen array ke kanan sampai index yang ingin disisipkan
        arr[i+1] = arr[i];
    }
    pnjg++; // menambah panjang array

    arr[sisip] = 9; // memasukkan elemen ke index yang ingin disisipkan

    for (int i=0; i<pnjg; i++) { // mencetak array dengan mengiterasikannya
        cout << arr[i] << " ";
    }
    cout << endl;
}
