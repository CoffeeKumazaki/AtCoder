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
    
    int a, b, c;
    cin >> a >> b >> c;

    int m = max(a, max(b, c));
    cout << a+ b+ c - m + m*10  << endl;
    return 0;
}