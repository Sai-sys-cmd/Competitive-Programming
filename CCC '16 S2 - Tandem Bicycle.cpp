#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int q = 0, n = 0, s = 0;
    cin >> q >> n;
    int d[n], p[n];
    
    for (int i = 0; i < n; i++) cin >> d[i];
    for (int i = 0; i < n; i++) cin >> p[i];
    
    int z = sizeof(d) / sizeof(d[0]);
    sort(d, d + z, greater<int>());
    sort(p, p + z, greater<int>());
    
    if (q == 1) {
        for (int i = 0; i < n; i++) {
            if (d[i] > p[i]) s += d[i];
            else s += p[i];
        }
    }
    
    else if (q == 2) {
        sort(p, p + n);
        for (int i = 0; i < n; i++) {
            if (d[i] > p[i]) s += d[i];
            else s += p[i];
        }
    }
    
    cout << s << endl;
    

    return 0;
}
