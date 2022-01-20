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

    // -- menghapus elemen tengah-tengah array --

    int hapus = 2; // variabel index yang ingin dihapus
    for (int i=hapus+1; i<pnjg; i++) { // menggeser array ke kiri sampai index yang ingin dihapus
        arr[i-1] = arr[i];
    }
    pnjg--; // mengurangi panjang array

    for (int i=0; i<pnjg; i++) { // mencetak array dengan mengiterasikannya
        cout << arr[i] << " ";
    }
    cout << endl;
}
