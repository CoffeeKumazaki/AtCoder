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
    
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B;
    for (int i=0; i<M; i++) {
        int t;
        cin >> t;
        B.push_back(t); 
    }

    int n=0;
    for (int i=0; i<N; i++) {
        int sum=0;
        for (int j=0; j<M; j++) {
            int t;
            cin >> t;
            sum += t*B[j];
        }
        if (sum > -C) n++;
    }

    cout << n << endl;

    return 0;
}