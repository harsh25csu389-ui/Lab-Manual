#include <iostream>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    for(int i=a; i<=b; ++i) {
        int j; for(j=2; j<=i/2; ++j) if(i%j==0) break;
        if(j>i/2 && i>1) cout << i << " ";
    }
    return 0;
}
