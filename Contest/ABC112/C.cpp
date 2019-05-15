#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

int height(int x, int y, int cx, int cy, int h){

    return abs(x-cx) + abs(y-cy) + h;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    

    for (int i=0; i<n; i++){
        int x, y, h;
        cin >> x >> y >> h;

        for(int cx=0; cx<100; cx++) {
            for(int cy=0; cy<100; cy++) {
                int ch = height(x, y, cx, cy, h);
                cout << cx << " " << cy << " " << ch << endl;
            }
        }
    }
    return 0;
}