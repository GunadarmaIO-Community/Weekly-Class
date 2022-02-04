#include <bits/stdc++.h>
using namespace std;

int main() {
    int nilai[5] = {10, 8, 6, 9, 10}; // deklarasi array
    cout << nilai[3] << endl; // memanggil elemen array dengan index 3
    nilai[2] = 1; // memasukkan nilai ulang di index 2
    for (int i=0; i<5; i++) { // melalukan iterasi array
        cout << nilai[i] << endl; // memanggil elemen array dengan index i
    }

    vector<int> vect = {10, 2, 4, 6, 9}; // deklarasi vector
    vect.push_back(7); // fungsi push_back() untuk memasukkan elemen di akhir vector
    vect[3] = 5; // memasukkan nilai ulang di index 3
    for (int i=0; i<vect.size(); i++) { // melalukan iterasi vector
        cout << vect[i] << endl; // memanggil elemen vector dengan index i
    }
}
