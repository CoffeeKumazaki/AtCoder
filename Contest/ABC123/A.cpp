#include <iostream>

using namespace std;

int main() {

    int k;
    int a[5];

    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> k;

    for (int i = 0; i < 5; ++i) {
        for (int j = i; j < 5; ++j) {
//            cout << a[i] << " " << a[j] << " " << k << endl;
            if( abs(a[i] - a[j]) > k ) {
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
    return 0;
}