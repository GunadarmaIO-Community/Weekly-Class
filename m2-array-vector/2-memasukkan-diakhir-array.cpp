#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6]; // membuat array kosong
    int pnjg = 0; // membuat variabel panjang untuk array

    arr[pnjg] = 3; // memasukkan elemen ke array
    pnjg++;
    arr[pnjg] = 7;
    pnjg++;
    arr[pnjg] = 5;
    pnjg++;
    arr[pnjg] = 8;
    pnjg++;

    for (int i=0; i<pnjg; i++) { // mencetak array dengan mengiterasikannya
        cout << arr[i] << " ";
    }
    cout << endl;
}
