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
    
    int a, b;
    cin >> a >> b;

    cout << ( a*b % 2 != 0 ? "Yes" :"No" ) << endl;

    return 0;
}