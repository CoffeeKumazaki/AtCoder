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
    
    cout << min(c, b/a) << endl;
    return 0;
}