#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char c; cin >> c;
    if(isdigit(c)) cout << "Number";
    else if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') cout << "Vowel";
    else cout << "Consonant";
    return 0;
}
