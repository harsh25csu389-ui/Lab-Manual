#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[5], f = INT_MIN, s = INT_MIN;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        if(a[i] > f) { s = f; f = a[i]; }
        else if(a[i] > s && a[i] != f) s = a[i];
    }
    cout << f << " " << s;
    return 0;
}