#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double basic;
        cin >> basic;
        cout << basic + (basic * 0.12) << endl;
    }
    return 0;
}
