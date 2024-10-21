#include <iostream>
using namespace std;

class calculations {
public:

    int maximum(int Y, int W) {
        return (Y > W) ? Y : W;
    }

    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};

int main() {

    calculations* object = new calculations();

    int Y, W;
    cin >> Y >> W;


    int result = object->maximum(Y, W);


    int counter = 7 - result;


    if (counter == 6) {

        cout << "1/1" << endl;
    } else if (counter == 0) {

        cout << "0/1" << endl;
    } else {

        int numerator = counter;
        int denominator = 6;


        int gcd = object->gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        cout << numerator << "/" << denominator << endl;
    }


    delete object;

    return 0;
}
