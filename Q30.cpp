#include <iostream>
using namespace std;
int main() {
    double s[10], tot = 0;
    for(int i = 0; i < 10; i++) { cin >> s[i]; tot += s[i]; }
    cout << "Total: " << tot << " Avg: " << tot / 10;
    return 0;
}