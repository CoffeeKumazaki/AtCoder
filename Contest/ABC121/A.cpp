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
    
    int H, W;
    cin >> H >> W ;
    int h, w;
    cin >> h >> w;

    cout << (H-h)*(W-w) << endl;
    
    return 0;
}