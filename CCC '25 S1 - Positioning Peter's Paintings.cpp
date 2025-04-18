#include <iostream>
using namespace std;

int main() {
    
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    int mh;
    if (h1 > h2) mh = h1;
    else mh = h2;

    int mw;
    if (w1 > w2) mw = w1;
    else mw = w2;

    int width1 = w1 + w2;
    int height1 = mh;
    int p1 = 2 * (width1 + height1);

    int width2 = mw;
    int height2 = h1 + h2;
    int p2 = 2 * (width2 + height2);

    int perimeter;
    if (p1 < p2) perimeter = p1;
    else perimeter = p2;

    cout << perimeter << endl;
    
    return 0;
}