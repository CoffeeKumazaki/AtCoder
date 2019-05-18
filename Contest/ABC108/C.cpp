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
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int l = 1; l <= n; l++)
            {
                if( (i+j)%k == 0 && (j+l)%k == 0 && (l+i)%k == 0 ) ans++;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}