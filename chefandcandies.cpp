#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int needed = n - x;
        if (needed <= 0) {
            cout << 0 << endl;
        } else {
            cout << (int)ceil((double)needed / 4) << endl;
        }
    }
    return 0;
}
