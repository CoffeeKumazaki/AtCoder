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
    
    int a, b;
    cin >> a >> b;

    cout << a*b-(a+b-1) << endl;
    return 0;
}