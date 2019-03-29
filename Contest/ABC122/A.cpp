#include <iostream>
#include <string>
using namespace std;

int main() {

    string b, ret;
    cin >> b;

    if (b == "T") {
        ret = "A";
    }
    else if (b == "A") {
        ret = "T";
    }
    else if (b == "G"){
        ret = "C";
    }
    else if (b == "C") {
        ret = "G";
    }
    cout << ret << endl;
}