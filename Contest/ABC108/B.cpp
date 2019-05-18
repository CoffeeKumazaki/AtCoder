#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2-x1;
    int dy = y2-y1;

    cout << x2 - dy << " " ;
    cout << y2 + dx << " " ;
    cout << x1 - dy << " " ;
    cout << y1 + dx << " " ;
    
    cout << endl;

    return 0;
}