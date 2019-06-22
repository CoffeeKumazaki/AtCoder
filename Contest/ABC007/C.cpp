#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>
#include <queue>
#include <stack>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int r, c; cin >> r >> c;
    vector<vector<char> > m(r, vector<char>(c));
    vector<vector<int> > d(r, vector<int>(c, -1));

    int sx, sy; cin >> sy >> sx;
    sx--; sy--;
    int gx, gy; cin >> gy >> gx;
    gx--;gy--;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++){
            cin >> m[i][j];
        }
    }

    queue<pair<int, int> > q;
    
    q.push(make_pair(sx, sy));
    d[sy][sx] = 0;
    while(!q.empty() && d[gy][gx] == -1){

        pair<int, int> p = q.front();
        q.pop();
        int x = p.first, y = p.second;
        int s = d[y][x];

        struct st{
            int x, y;
        };
        st mo[4] = {
            { -1, 0},
            { 1, 0},
            { 0, 1},
            { 0, -1},
        };

        for (int i=0; i<4; i++) {
            int nx = x+mo[i].x, ny = y+mo[i].y;
            if ( m[ny][nx] == '#' ) continue;
            if ( d[ny][nx] != -1 ) continue;
            d[ny][nx] = s+1;
            q.push(make_pair(nx, ny));
        }
#if 0
        cout << "--" << endl;
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++){
                cout << d[i][j] << " ";
            }
            cout << endl;
        }
        #endif

    }

    cout <<  d[gy][gx] << endl;


    return 0;
}