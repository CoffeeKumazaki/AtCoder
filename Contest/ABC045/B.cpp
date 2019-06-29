#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>
#include <queue>
#include <stack>
#define FOR(arg, ini, end) for(int arg = ini; arg < end; arg++)


using namespace std;
int main(int argc, const char * argv[]) {
    
    string a[3];
    cin >> a[0] >> a[1] >> a[2];

    int i=0;
    int id[3] = {0, 0, 0};
    while( a[i].size() != id[i] ) {
        id[i]++;
        i = a[i][id[i]-1] - 'a';
    }

    string s="ABC";
    cout << s[i] << endl;

    return 0;
}