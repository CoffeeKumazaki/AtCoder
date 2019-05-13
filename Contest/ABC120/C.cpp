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

    string s;
    cin >> s;
    int z = 0;
    for (int i=0; i< s.size(); i++) {
        if (s[i] == '0') {
            z ++;
        }
    }

    z = min(z, (int)s.size()-z);

    cout << z*2 << endl;
    
    return 0;
}