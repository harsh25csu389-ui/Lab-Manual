#include <iostream>
using namespace std;
int main() {
    double val;
    int type;
    cin >> val >> type;
    if (type == 1) cout << (val - 32) * 5.0 / 9.0;
    else cout << (val * 9.0 / 5.0) + 32;
    return 0;
}
