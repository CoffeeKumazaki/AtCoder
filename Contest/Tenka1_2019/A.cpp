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
    
    int A, B, C;
    cin >> A >> B >> C;
    if (A>=C) {
        cout << ( ( A >= C && C >= B ) ? "Yes" : "No" ) << endl;
    }
    else {
        cout << ( ( A <= C && C <= B ) ? "Yes" : "No" ) << endl;
    }
    return 0;
}