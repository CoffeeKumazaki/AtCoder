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
    
    int a, b, k;
    cin >> a >> b >> k;

    int c=0;
    int i = min(a,b);
    for( ; i >0 ; i--)
    {
        if (a%i==0 && b%i==0) c++;
        if (c==k) break;
    }
    
    cout << i << endl;
    return 0;
}