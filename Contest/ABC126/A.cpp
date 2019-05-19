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
    
    int n, k;
    cin >> n >> k;
    k--;
    string s;
    cin >> s;

    if (s[k] == 'A') {
        s[k] ='a';
    }
    else if ( s[k] == 'B') {
        s[k] = 'b';
    }
    else if ( s[k] == 'C') {
        s[k] = 'c';
    }
    cout <<  s << endl;
    return 0;
}