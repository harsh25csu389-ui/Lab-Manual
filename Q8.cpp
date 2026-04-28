#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0) cout << "Buzz";
        if(i % 5 == 0) cout << "Fuzz";
        if(i % 3 != 0 && i % 5 != 0) cout << i;
        cout << endl;
    }
    return 0;
}
