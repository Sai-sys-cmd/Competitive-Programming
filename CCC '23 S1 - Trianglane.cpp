// PARTIAL

#include <iostream>
using namespace std;

int main() {

    int c, temp = 0, count = 0;
    cin >> c;
    
    int arr[2][c];
    
    for (int i = 0; i < c; i++) {
        cin >> temp;
        arr[0][i] = temp;
    }
    
    for (int i = 0; i < c; i++) {
        cin >> temp;
        arr[1][i] = temp;
    }
    
    for (int i = 0; i < c; i++) {
        
        if (arr[0][i] == 1) {
            count += 3;
            if (arr[0][i - 1] == 1) count -= 1;
            if (arr[1][i] == 1) count -= 1;
            if (arr[0][i + 1] == 1) count -= 1;
        }
        
        else if (arr[1][i] == 1) {
            count += 3;
            if (arr[1][i - 1] == 1) count -= 1;
            if (arr[0][i] == 1) count -= 1;
            if (arr[1][i + 1] == 1) count -= 1;
        }
        
    }
    
    cout << count << endl;

    return 0;
}
