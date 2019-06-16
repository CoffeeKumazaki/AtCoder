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
    
    double w, h;
    double x, y;
    cin >> w >> h >> x >> y;

    printf("%lf ", double(double(w) * double(h) / double(2.0)));
    if (w - x*double(2.0) == 0.0 && h - y*double(2.0) == 0.0) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}