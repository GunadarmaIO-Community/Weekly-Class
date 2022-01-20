#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {4, 2, 7, 5, 9}; //array yang diberikan
    int arr_baru[5]; //array baru

    for (int i=0; i<5; i++) { // mengiterasi array
        arr_baru[i] = arr[i]*arr[i]; // mengalikan setiap elemen array dan memasukkannya ke array baru
    }

    for (int i=0; i<5; i++) { // mencetak array
        cout << arr_baru[i] << " ";
    }
    cout << endl;
}
