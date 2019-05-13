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

    if (b%a == 0) 
        cout << a+b << endl;
    else
        cout << b-a << endl;
    
    return 0;
}