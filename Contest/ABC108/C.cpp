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
    
    long n, k;
    cin >> n >> k;
    long ans1=n/k, ans2=(n-k/2)/k+1;

   if (k % 2 == 0 && n >= k / 2) {
        cout << ans1*ans1*ans1 + ans2*ans2*ans2 << endl;
   }
   else {
        cout << ans1*ans1*ans1 << endl;
   }


    return 0;
}