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

    int i = 1;
    for(; i<=9; i++) {
        if (n <= i*111 ) break;
    }

    cout << i * 111 << endl;
    return 0;
}