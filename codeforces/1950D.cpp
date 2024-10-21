#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int binaryDecimalProducts[] = {
        1, 10, 11, 100, 101, 110, 111, 121, 1000, 1001,
        1010, 1011, 1100, 1101, 1110, 1111,1210, 1221, 1331, 10000, 10001,
        10010, 10011, 10100, 10101, 10110, 10111, 10201, 11000,
        11001, 11010, 11011, 11100,11101, 11110, 11111, 11121,
        11211,12100, 12111, 12210, 12221,12321, 13310,13431, 14641, 100000
    };

    int size = sizeof(binaryDecimalProducts) / sizeof(binaryDecimalProducts[0]);
    //sort(binaryDecimalProducts, binaryDecimalProducts + size);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if (binary_search(binaryDecimalProducts, binaryDecimalProducts + size, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
