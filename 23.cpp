#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i = 1; i <= 2 * n - 1; i++) {
        int stars = (i <= n) ? i : 2 * n - i;
        for(int j = 0; j < stars; j++) cout << "*";
        for(int j = 0; j < 2 * (n - stars); j++) cout << " ";
        for(int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
