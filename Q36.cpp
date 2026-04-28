#include <iostream>
using namespace std;
int main() {
    int m, n, p, q; cin >> m >> n >> p >> q;
    if(n != p) { cout << "Invalid"; return 0; }
    int a[m][n], b[p][q], r[m][q] = {0};
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> a[i][j];
    for(int i=0; i<p; i++) for(int j=0; j<q; j++) cin >> b[i][j];
    for(int i=0; i<m; i++)
        for(int j=0; j<q; j++)
            for(int k=0; k<n; k++) r[i][j] += a[i][k] * b[k][j];
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) cout << r[i][j] << " ";
        cout << endl;
    }
    return 0;
}