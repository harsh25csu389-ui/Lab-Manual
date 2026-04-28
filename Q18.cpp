#include <iostream>
using namespace std;
int main() {
    int n, r=0, t, d; cin >> n; t=n;
    while(t>0) { d=t%10; r=r*10+d; t/=10; }
    if(n==r) cout << "Palindrome"; else cout << "Not";
    return 0;
}
