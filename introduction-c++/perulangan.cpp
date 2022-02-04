#include <bits/stdc++.h>
using namespace std;

int main() {
    // for
    for (int i=0; i<10; i++) {
        cout << "hello world " << i << endl;
    }

    // for if
    for (int i=0; i<10; i++) {
        if (i%3 == 0) {
            cout << i << endl;
        }
    }

    // while
    int i = 0;
    while (i < 10) {
        i++;
        cout << i << endl;
    }

    // while if
    i = 0;
    while (i < 10) {
        i++;
        if (i%3 == 0) {
            continue;
        }
        cout << i << endl;
    }

    // do while
    i = 0;
    do {
        cout << i << endl;
        i++;
    } while(i < 0);
}
