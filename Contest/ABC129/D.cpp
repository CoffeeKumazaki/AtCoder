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
    
    int w, h;
    cin >> h >> w;

    vector<string> s(h);
    vector<vector<pair<int, int> > > rn(h);
    for(int i=0; i<h; i++) {
        rn[i].resize(w);
        cin >> s[i];
        int l = 0, id = 0;
        for (int j=0; j<w; j++) {
            if (s[i][j] == '.') {
                l++;
            }
            if (s[i][j] == '#' || j==w-1) {
                for(int k=id; k<j; k++){
                    rn[i][k].first = l;
                }
                if (j==w-1) rn[i][j].first = l;
                l=0;
                id = j+1;
            }
        }
    }

    for (int i=0; i<w; i++) {
        int l = 0, id = 0;
        for(int j=0; j<h; j++) {
            if ( s[j][i] == '.') {
                l++;
            }
            if (s[j][i] == '#' || j==h-1) {
                for(int k=id; k<j; k++){
                    rn[k][i].second = l;
                }
                if (j==h-1) rn[j][i].second = l;
                l=0;
                id = j+1;
            }
        }
    }


    int m = 0;
    for(int r=0; r<h; r++){
        // cout << "--" << endl;
        for (int c=0; c<w; c++ ){
            // cout << rn[r][c].first << " " << rn[r][c].second << endl;
            m = max(m, rn[r][c].first + rn[r][c].second - 1);
        }
    }

    cout << m << endl;
    return 0;
}