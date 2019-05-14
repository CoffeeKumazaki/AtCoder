#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

int tmp(int t, int a, int h) {

    return (int)abs(t*1000 - 6*h - a*1000 );
}

int main(int argc, const char * argv[]) {
    
    int n, t, a;
    cin >> n >> t >> a;

    int h;
    cin >> h;
    int min = tmp(t, a, h);
    int index = 1;
    for (int i=1; i < n; i++) {
        cin >> h;
        if (min > tmp(t, a, h)) {
            min = tmp(t, a, h);
            index = i+1;
        }
    }
    
    cout << index << endl;
    return 0;
}