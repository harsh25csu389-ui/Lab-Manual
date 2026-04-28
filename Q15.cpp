#include <iostream>
using namespace std;
int main() {
    int n; double val, mx; cin >> n >> mx;
    for(int i=1; i<n; ++i) { cin >> val; if(val>mx) mx=val; }
    cout << mx;
    return 0;
}
