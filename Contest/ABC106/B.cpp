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
    
    int n;
    cin >> n;

    int c= (n>=105) ? 1 : 0;
    for(int i=107; i <= n; i = i + 2) {
        int ct = 1;
        for (int j=1; j<i; j++){
            if ( i % j == 0 ) ct++;
        }
        if (ct == 8) c+=1;
    }

    cout << c << endl;
    return 0;
}