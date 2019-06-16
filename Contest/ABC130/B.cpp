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
    
    int n, x;
    cin >> n >> x;

    int c = 1;
    int prev = 0;
    for(int i=0; i<n; i++) {
        int l;
        cin >> l;
        int d = prev + l;
        if ( d<=x ) c++;
        prev = d;
    }

    cout << c << endl;
    return 0;
}