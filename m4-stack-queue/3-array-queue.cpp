#include <bits/stdc++.h>
using namespace std;

int n = 6;
int *arrQueue = new int[n];
int frontQueue = 0;
int backQueue = 0;
int sz = 0;

void push(int x) {
    if (sz+1 == n) {
        cout << "queue penuh" << endl;
    } else {
        arrQueue[backQueue] = x;
        backQueue++;
        backQueue %= n;
        sz++;
    }
}

void pop() {
    frontQueue++;
    frontQueue %= n;
    sz--;
}

int front() {
    return arrQueue[frontQueue];
}

int back() {
    if (backQueue == 0) {
        return arrQueue[n-1];
    } else {
        return arrQueue[backQueue-1];
    }
}

bool empty() {
    if (frontQueue == backQueue) {
        return true;
    } else {
        return false;
    }
}

int size() {
    return sz;
}

int main() {
    push(3);
    push(7);
    push(2);
    push(9);
    push(5);
    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;
    // [3, 7, 2, 9, 5]

    pop();
    pop();
    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;
    // [2, 9, 5]

    if (empty()) {
        cout << "queue kosong" << endl;
    } else {
        cout << "queue tidak kosong" << endl;
    }

    push(1);
    push(7);
    cout << "size: " << size() << endl;
    // [2, 9, 5, 1, 7]

    push(3);
    // [2, 9, 5, 1, 7]
}
