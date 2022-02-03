#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> buku; // deklarasi stack

    if (buku.empty()) {
        cout << "stack kosong" << endl;
    } else {
        cout << "stack tidak kosong" << endl;
    }

    buku.push('a');
    buku.push('b');
    buku.push('c');
    cout << "top: " << buku.top() << endl;
    // [a, b, c]

    if (buku.empty()) {
        cout << "stack kosong" << endl;
    } else {
        cout << "stack tidak kosong" << endl;
    }

    buku.pop();
    buku.pop();
    cout << "top: " << buku.top() << endl;
    // [a]

    buku.push('d');
    buku.push('e');
    buku.push('f');
    buku.push('g');
    buku.push('h');
    cout << "size: " << buku.size() << endl;
    cout << "top: " << buku.top() << endl;
    // [a, d, e, f, g, h]
}
