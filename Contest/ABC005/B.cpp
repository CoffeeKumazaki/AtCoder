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
    
    int n, c=100;
    cin >> n;

    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        c = min(c,t);
    }

    cout << c << endl;
    return 0;
}