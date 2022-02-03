#include <bits/stdc++.h>
using namespace std;

int n = 5;
int *arrStack = new int[n];
int numElemen = 0;

void push(int x) {
    if (numElemen == n) {
        cout << "stack penuh" << endl;
    } else {
        arrStack[numElemen] = x;
        numElemen++;
    }
}

void pop() {
    numElemen--;
}

int top() {
    return arrStack[numElemen-1];
}

bool empty() {
    if (numElemen > 0) {
        return false;
    } else {
        return true;
    }
}

int size() {
    return numElemen;
}

int main() {
    push(3);
    push(4);
    push(2);
    cout << "top: " << top() << endl;
    // [3, 4, 2]

    pop();
    cout << "top: " << top() << endl;
    // [3, 4]

    push(9);
    push(7);
    cout << "top: " << top() << endl;
    // [3, 4, 9, 7]

    if (empty()) {
        cout << "stack kosong" << endl;
    } else {
        cout << "stack tidak kosong" << endl;
    }

    push(8);
    cout << "size: " << size() << endl;
    // [3, 4, 9, 7, 8]

    push(1);
    // [3, 4, 9, 7, 8]
}
