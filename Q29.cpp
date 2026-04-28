#include <iostream>
using namespace std;
int main() {
    double t[30], mn; cin >> t[0]; mn = t[0];
    for(int i = 1; i < 30; i++) { cin >> t[i]; if(t[i] < mn) mn = t[i]; }
    cout << mn;
    return 0;
}