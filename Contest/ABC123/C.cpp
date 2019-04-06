#include <iostream>

using namespace std;

int main () {

    long n = 0;
    long a[5];
    long c[6] = {0};
    cin >> n;
    long mincost = __LONG_MAX__;
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
        c[i+1] = 0;
        if (mincost > a[i] ) {
            mincost = a[i];
        }
    }

    long time = 0;
#if 1
    time = n / mincost;
    time += (n % mincost == 0) ? 4 : 5;
#else
    c[0] = n;
    while ( c[5] != n ) {
        for ( int i = 4; i >= 0; --i ) {
            int move = min(a[i], c[i]);
            c[i+1] += move;
            c[i] -= move;
        }
        time += 1;
        cout << time << endl;
        for (int i = 0; i < 6; ++i) {
            cout << c[i] << " ";
        }
        cout << endl;
    }

#endif
    cout << time << endl;
    return 0;
}