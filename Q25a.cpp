#include <iostream>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int f = 0;
        for(int j = 2; j <= i/2; j++) if(i % j == 0) f = 1;
        if(f == 0 && i > 1) cout << i << " ";
    }
    return 0;
}