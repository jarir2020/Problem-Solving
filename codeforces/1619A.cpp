#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:

    MyString(const char* s) {

        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }


    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }


    ~MyString() {
        delete[] str;
    }


    int my_strlen() {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        return length;
    }


    MyString my_substr(int start, int length) {
        char* sub = new char[length + 1];
        int index = 0;

        for (int i = start; i < start + length && i < my_strlen(); i++) {
            sub[index++] = str[i];
        }
        sub[index] = '\0';

        return MyString(sub);
    }


    bool is_square() {
        int n = my_strlen();
        if (n % 2 != 0) return false;

        MyString firstHalf = my_substr(0, n / 2);
        MyString secondHalf = my_substr(n / 2, n / 2);


        bool result = (strcmp(firstHalf.str, secondHalf.str) == 0);

        return result;
    }


    const char* get_string() const {
        return str;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        char input[101];
        cin >> input;

        MyString myStr(input);

        if (myStr.is_square()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
