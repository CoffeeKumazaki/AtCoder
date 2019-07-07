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
    
    int n;
    cin >> n;
    vector<int> p(n);
    FOR(i, 0, n){
        cin >> p[i];
    }

    int c=0;
    FOR(i, 0, n-2){
        if ( p[i]<p[i+1] && p[i+2] > p[i+1] ) c++;
        else if ( p[i]>p[i+1] && p[i+2] < p[i+1] ) c++;
    }

    cout << c << endl;
    return 0;
}