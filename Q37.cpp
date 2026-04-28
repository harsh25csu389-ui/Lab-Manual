#include <iostream>
#include <string>
using namespace std;
int main() {
    string u; cin >> u;
    for(char c : u) if(!isalnum(c)) { cout << "Invalid"; return 0; }
    cout << "Valid";
    return 0;
}