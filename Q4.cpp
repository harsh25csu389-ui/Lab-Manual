#include <iostream>
using namespace std;
int main() {
    int id, qty;
    double price;
    cin >> id >> qty >> price;
    double total = qty * price;
    cout << total - (total * 0.20);
    return 0;
}
