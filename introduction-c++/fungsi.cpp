#include <bits/stdc++.h>
using namespace std;

void halo(string nama) { // deklarasi fungsi void (fungsi yang tidak mengembalikan nilai)
    cout << "halo " << nama << endl;
}

int tambah(int a, int b) { // deklarasi fungsi int (fungsi yang mengembalikan nilai integer)
    return a+b; // return untuk mengembalikan nilai dari fungsi
}

int main() {
    halo("budi"); // memanggil fungsi dengan argumen "budi"
    halo("ani"); // memanggil fungsi dengan argumen "ani"

    cout << tambah(6, 9) << endl; // memanggil fungsi tambah dengan argumen 6 dan 9
    int c = tambah(5, 8); // memanggil fungsi tambah kemudian memasukkannya ke variabel c
    cout << c << endl;
}
