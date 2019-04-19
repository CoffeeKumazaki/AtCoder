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
    
    int N, M;
    cin >> N >> M;

    vector<pair<int, int> > A;

    for (int i=0; i<N; i++){
        int a, b;
        cin >> a >> b;
        A.push_back(pair<int, int>(a, b));
    }

    sort(A.begin(), A.end());
    double m=0;
    for (pair<int, int> x : A) {
        int num = min(M, x.second);
        m += (double)x.first*num;
        M -= num;
        if (M==0){
            break;
        }
    }
    
    int d=log10(m);
    for (int i=d; i >= 0; --i) {
        int v = (m/pow(10,i));
        cout << v;
        m = m - (double)v*(double)(pow(10,i));
    }
    cout << endl;
    return 0;
}