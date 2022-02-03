#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> antrian; // deklarasi queue

    if (antrian.empty()) {
        cout << "queue kosong" << endl;
    } else {
        cout << "queue tidak kosong" << endl;
    }

    antrian.push('a');
    antrian.push('b');
    antrian.push('c');
    antrian.push('d');
    cout << "front: " << antrian.front() << endl;
    cout << "back: " << antrian.back() << endl;
    // [a, b, c, d]

    if (antrian.empty()) {
        cout << "queue kosong" << endl;
    } else {
        cout << "queue tidak kosong" << endl;
    }

    antrian.pop();
    antrian.pop();
    cout << "front: " << antrian.front() << endl;
    cout << "back: " << antrian.back() << endl;
    // [c, d]

    antrian.push('e');
    antrian.push('f');
    antrian.push('g');
    antrian.push('h');
    antrian.push('i');
    cout << "size: " << antrian.size() << endl;
    // [c, d, e, f, g, h, i]

    cout << "front: " << antrian.front() << endl;
    cout << "back: " << antrian.back() << endl;
}
