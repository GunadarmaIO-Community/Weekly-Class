#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {4, 2, 7, 5, 9}; //array yang diberikan

    for (int i=0; i<5; i++) { // mengiterasi array
        arr[i] *= arr[i]; // mengalikan dan langsung memasukkannya ke array (in-place)
    }

    for (int i=0; i<5; i++) { // mencetak array
        cout << arr[i] << " ";
    }
    cout << endl;
}
