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
    float x;
    string u;

    cin >> n;

    float c = 0.0;
    float bit = 380000.0;
    for (int i=0; i<n; i++) {

        cin >> x >> u;
        if (u[0] == 'J') c += x;
        else c +=x*bit;
    }

    cout << c << endl;
    return 0;
}