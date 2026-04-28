#include <iostream>
#include <string>
using namespace std;
int main() {
    string p; cin >> p;
    bool u = 0, l = 0, d = 0, s = 0;
    string sp = "@#$%!&*";
    for(char c : p) {
        if(isupper(c)) u = 1;
        else if(islower(c)) l = 1;
        else if(isdigit(c)) d = 1;
        else if(sp.find(c) != string::npos) s = 1;
    }
    if(u && l && d && s) cout << "Valid"; else cout << "Invalid";
    return 0;
}