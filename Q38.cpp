#include <iostream>
using namespace std;
int main() {
    int r; cin >> r;
    for(int i = 0; i < r; i++) {
        int v = 1;
        for(int k = 0; k < r - i - 1; k++) cout << " ";
        for(int j = 0; j <= i; j++) {
            cout << v << " ";
            v = v * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}