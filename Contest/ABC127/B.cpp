#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int r , d, x;
    cin >> r >> d>> x;

    for (int i=0; i<10; i++) {
        int xn = r*x-d;
        cout << xn << endl;
        x = xn;
    }
    return 0;
}