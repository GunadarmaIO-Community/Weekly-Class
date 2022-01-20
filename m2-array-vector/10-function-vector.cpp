#include <bits/stdc++.h>
using namespace std;

void cetak(vector<int> vect) {
    for (int i=0; i<vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vect{1, 2, 3};
    //[1, 2, 3]

    vect.push_back(4);
    vect.push_back(5);
    //[1, 2, 3, 4, 5]

    cetak(vect);

    vect.pop_back();
    //[1, 2, 3, 4]

    cetak(vect);

    vect.insert(vect.begin()+2, 6);
    //[1, 2, 6, 3, 4]
    //menyisipkan 6 di indeks 2

    cetak(vect);

    vect.erase(vect.begin()+3);
    //[1, 2, 6, 4]
    //menghapus elemen dengan index 3

    cetak(vect);

    cout << vect.size() << endl;
    //4

    vect.clear();
    cout << vect.size() << endl;
    //0

    if (vect.empty()) {
        cout << "vector kosong" << endl;
    } else {
        cout << "vector tidak kosong" << endl;
    }
    //vector kosong

    vect.assign({5, 6, 7, 8, 9});
    //[5, 6, 7, 8, 9]

    cetak(vect);

    //[5, 6, 7, 8, 9]
    cout << vect.front();
    //5

    cout << endl;

    //[5, 6, 7, 8, 9]
    cout << vect.back();
}
