#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {12, 14, 20, 21, 25, 36};
    int x = 30; //nilai yang dicari
    int i = 0; //pointer 1
    int j = 6; //pointer 2

    while (i < j) {
        if (arr[i]+arr[j] < x) {
            i++;
        } else if (arr[i]+arr[j] > x) {
            j--;
        } else {
            cout << arr[i] << " " << arr[j] << endl;
            break;
        }
    }
}
