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

    n = n%30;
    string s = "123456";
    for(int i=0; i<n; i++) {
        swap(s[(i%5)], s[(i%5)+1]);
    }

    cout << s << endl;
    return 0;
}