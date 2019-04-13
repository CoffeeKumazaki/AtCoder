#include <iostream>
#include <string>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int score = 0;
    score = max(a, b);
    score += max(max(a, b) - 1, min(a, b));

    cout << score << endl;
    return 0;
}