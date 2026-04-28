#include <iostream>
using namespace std;
int main() {
    double p[10], mx = 0;
    for(int i = 0; i < 10; i++) { cin >> p[i]; if(p[i] > mx) mx = p[i]; }
    cout << mx;
    return 0;
}