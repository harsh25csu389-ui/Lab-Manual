#include <iostream>
using namespace std;
int main() {
    int a[5], c = 0;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
        if(a[i] % 3 == 0 && a[i] % 5 == 0) c++;
    }
    cout << c;
    return 0;
}