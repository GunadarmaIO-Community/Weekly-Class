#include <bits/stdc++.h>
using namespace std;

void cetak(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6];
    int pnjg = 0;

    arr[pnjg++] = 3;
    arr[pnjg++] = 7;
    arr[pnjg++] = 5;
    arr[pnjg++] = 8;

    //cetak(arr, pnjg);

    for (int i=pnjg; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    pnjg++;

    arr[0] = 9;

    //cetak(arr, pnjg);

    int sisip = 2;
    for (int i=pnjg; i>=sisip; i--) {
        arr[i+1] = arr[i];
    }
    pnjg++;

    arr[sisip] = 5;

    //cetak(arr, pnjg);

    pnjg--;

    //cetak(arr, pnjg);

    for (int i=1; i<pnjg; i++) {
        arr[i-1] = arr[i];
    }
    pnjg--;

    //cetak(arr, pnjg);

    int hapus = 2;
    for (int i=hapus+1; i<pnjg; i++) {
        arr[i-1] = arr[i];
    }
    pnjg--;

    cetak(arr, pnjg);
    //cetak(arr, pnjg+3);
}
