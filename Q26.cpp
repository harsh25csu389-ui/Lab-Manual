#include <iostream>
using namespace std;
int main() {
    double m[5], sum = 0;
    for(int i = 0; i < 5; i++) { cin >> m[i]; sum += m[i]; }
    cout << "Total: " << sum << " %: " << sum / 5;
    return 0;
}