#include <iostream>
using namespace std;
int main() {
    int qty; double price; cin >> qty >> price;
    double total = qty * price;
    if(qty > 1000) total *= 0.9;
    cout << total;
    return 0;
}
