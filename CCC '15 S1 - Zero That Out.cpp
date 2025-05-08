#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, count = 0;
    cin >> n;
    vector <int> d;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        if (x == 0) d.pop_back();
        
        else d.push_back(x);

    }

    for (int i = 0; i < d.size(); i++) {
        count += d[i];
    }

    cout << count << endl;

    return 0;
}
