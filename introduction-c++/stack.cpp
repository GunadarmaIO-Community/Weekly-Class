#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> buku; // deklarasi stack

    buku.push(1); // fungsi push() untuk elemen di akhir stack
    buku.push(2);
    buku.push(3);
    cout << buku.top() << endl; // fungsi top() untuk memanggil elemen paling belakang stack
    if (buku.empty()) { // fungsi empty() untuk mengecek stack kosong atau tidak
        cout << "stack kosong" << endl;
    } else {
        cout << "stack tidak kosong" << endl;
    }

    buku.pop(); // fungsi pop() untuk mengeluarkan elemen paling belakang stack
    buku.pop();
    buku.pop();
    if (buku.empty()) {
        cout << "stack kosong" << endl;
    } else {
        cout << "stack tidak kosong" << endl;
    }
}
