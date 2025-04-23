#include <iostream>
using namespace std;

int main() {

    int n, count = 0, h = 0;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> count;
        arr[i] = count;
    }
    
    for (int i = 0; i < (n/2); i++) {
        if (arr[i] == arr[i+(n/2)]) h+=2;
    }
    
    cout << h << endl;

    return 0;
}
