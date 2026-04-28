#include <iostream>
using namespace std;
int main() {
    int arr[5], es = 0, os = 0;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) es += arr[i]; else os += arr[i];
    }
    cout << "Even: " << es << " Odd: " << os;
    return 0;
}