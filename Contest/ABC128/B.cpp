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
struct st{
    string s;
    int index;
    int p;
};


bool cmp_name(const st &a, const st &b)
{
    return a.s < b.s;
}

bool cmp_p(const st &a, const st &b)
{
    return a.p > b.p;
}


int main(int argc, const char * argv[]) {
    
    int n; 
    cin >> n;

    vector<pair<pair<string, int>, int> > rev(n);

    for (int i=0; i< n; i++){
        int p;
        cin >> rev[i].first.first >> p;
        rev[i].first.second = -p;
        rev[i].second = i+1;
    }

    //sort(rev.begin(), rev.end(), cmp_p); 
    // sort(rev.begin(), rev.end(), cmp_name); 
    sort(rev.begin(), rev.end());

    for (int i=0; i< n; i++){
        cout << rev[i].second << endl;
    }
    return 0;
}