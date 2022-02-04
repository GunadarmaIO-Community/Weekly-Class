#include <bits/stdc++.h>
using namespace std;

int main() {
    // if else
    int nilai = 40;
    if (nilai >= 70) { // jika variabel nilai memiliki isi lebih dari sama dengan 70
        cout << "A" << endl;
    } else if (nilai >= 50) { // jika variabel nilai memiliki isi lebih dari sama dengan 50
        cout << "B" << endl;
    } else { // jika kondisi diatas tidak terpenuhi
        cout << "C" << endl;
    }

    // switch
    int hari = 5;
    switch (hari) {
    case 1: // jika variabel hari memiliki isi 1
        cout << "Senin" << endl;
        break;
    case 2: // jika variabel hari memiliki isi 2
        cout << "Selasa" << endl;
        break;
    case 3: // jika variabel hari memiliki isi 3
        cout << "Rabu" << endl;
        break;
    case 4: // jika variabel hari memiliki isi 4
        cout << "Kamis" << endl;
        break;
    default: // jika isi dari variabel hari tidak ada diatas 
        cout << "Tidak ada dalam pilihan" << endl;
    }
}
