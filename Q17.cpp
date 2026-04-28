#include <iostream>
using namespace std;
int main() {
    int n, s=0, t, d, c=0; cin >> n;
    for(int i=1; i<n; ++i) if(n%i==0) s+=i;
    if(s==n) cout << "Perfect" << endl;
    t=n; while(t>0) { d=t%10; c+=d*d*d; t/=10; }
    if(c==n) cout << "Armstrong";
    return 0;
}
