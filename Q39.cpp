#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
int main() {
    string s, w, res = ""; cin.ignore(); getline(cin, s);
    stringstream ss(s); int words = 0, d = 0, sp = 0;
    while(ss >> w) {
        if(words > 0) res += " ";
        for(int i=0; i<w.length(); i++) {
            if(isdigit(w[i])) d++;
            else if(!isalpha(w[i])) sp++;
            w[i] = (i==0 && words==0) ? toupper(w[i]) : tolower(w[i]);
        }
        res += w; words++;
    }
    cout << "String: " << res << "\nWords: " << words << "\nDigits: " << d << "\nSpecial: " << sp;
    return 0;
}