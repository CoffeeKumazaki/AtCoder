#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

    int x[3], y[3];
    for (int i = 0; i < 3; ++i) {
        cin >> x[i] >> y[i];
    }

    x[2] -= x[0];
    x[1] -= x[0];
    y[2] -= y[0];
    y[1] -= y[0];

    printf("%.20lf\n", float(abs(x[1]*y[2] - x[2]*y[1]))/2.0);
    return 0;
}
