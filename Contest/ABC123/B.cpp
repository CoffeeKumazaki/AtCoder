#include <iostream>

using namespace std;
int main () {

    int a[5];
    int o[5];
    int sub[5];
    for(int i = 0; i < 5; ++i) {
        cin >> a[i];
        o[i] = 0;
        int n = (a[i]/10+1);
        sub[i] = (a[i]%10==0) ? 0 : n * 10 - a[i];
        // cout << i << " " << sub[i] << endl;
    }

    int time = 0;
    for (int i = 0; i < 5; ++i) {
        int idx = 0;
        int max = 10;
        for (int j = 0; j < 5; ++j) {
//            cout << sub[j] << endl;
            if (max > sub[j] && o[j] == 0) {
                max = sub[j];
                idx = j;
            }
        }

        o[idx] = 1;
        time += (i==4) ? a[idx] : (a[idx]%10==0) ? a[idx] : (a[idx]/10+1)*10;
        // cout << i << " " << idx << " " <<time << endl;
    }
    cout << time << endl;
    return 0;
}