#include <iostream>
using namespace std;
int main() {
    int m[3][5];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 5; j++) cin >> m[i][j];
    cout << "S1-Sub2: " << m[0][1] << " S3-Sub5: " << m[2][4];
    return 0;
}