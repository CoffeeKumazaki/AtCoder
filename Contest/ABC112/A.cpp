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
    
    int n;
    cin >> n;
    if (n == 1) {
        cout << "Hello World" << endl;
    }
    else {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}