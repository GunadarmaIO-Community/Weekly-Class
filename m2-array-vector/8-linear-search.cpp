#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // array
    int pnjg = sizeof(arr)/sizeof(arr[0]); // mencari panjang array
    int cari = 9; // elemen yang ingin dicari

    for (int i=0; i<pnjg; i++) { // melakukan iterasi dari awal sampai akhir array
        if (arr[i] == cari) { // kondisi jika elemen ditemukan
            cout << i << endl;
            break;
        }
    }
}
