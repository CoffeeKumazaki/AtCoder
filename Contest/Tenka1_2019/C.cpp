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
    int n;
    cin >> n >> s;

    int m=__INT_MAX__;
    vector<int> bc(n+1,0);
    for(int i = 0; i < n; i++)
    {
        bc[i+1] = bc[i];
        if (s[i]=='#') bc[i+1]++;
    }

    for(int i = 0; i <= n; i++)
    {
        m = min(m, (bc[i] + n  - i - (bc[n] - bc[i] )));
    }
    

    cout << m << endl;
    return 0;
}