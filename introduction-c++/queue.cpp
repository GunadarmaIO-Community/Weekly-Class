#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> antrian; // deklarasi queue

    antrian.push(1); // fungsi push() untuk memasukkan elemen di akhir queue
    antrian.push(2);
    antrian.push(3);
    cout << antrian.front() << endl; // fungsi front() untuk memanggil elemen paling depan queue
    cout << antrian.back() << endl; // fungsi back() untuk memanggil elemen paling belakang queue
    if (antrian.empty()) { // fungsi empty() untuk mengecek queue kosong atau tidak
        cout << "queue kosong" << endl;
    } else {
        cout << "queue tidak kosong" << endl;
    }

    antrian.pop(); // fungsi pop() untuk mengeluarkan elemen paling depan queue
    antrian.pop();
    antrian.pop();
    if (antrian.empty()) {
        cout << "queue kosong" << endl;
    } else {
        cout << "queue tidak kosong" << endl;
    }
}
