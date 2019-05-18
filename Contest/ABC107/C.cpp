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
    
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    bool z=false;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (h[i]==0) z = true;
    }

    // if (z) k--; 

    int m=1000000000;
    for (int i = 0; i < n-k+1; i++)
    {
        m = min(m, abs(h[i]) + abs(h[i+k-1] - h[i]));
        m = min(m, abs(h[i+k-1]) + abs(h[i+k-1] - h[i]));
    }
    
    cout<<m<<endl;
    
    return 0;
}