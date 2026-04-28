#include <iostream>
using namespace std;
int main() {
    int ch; double a, b;
    while(true) {
        cin >> ch; if(ch==5) break; cin >> a >> b;
        switch(ch) {
            case 1: cout << a+b << endl; break;
            case 2: cout << a-b << endl; break;
            case 3: cout << a*b << endl; break;
            case 4: cout << a/b << endl; break;
        }
    }
    return 0;
}
