#include <bits/stdc++.h>
using namespace std;

class Square {
private:
    vector<pair<int, int>> points;


    int distance(pair<int, int> p1, pair<int, int> p2) {
        if (p1.first == p2.first) {
            return abs(p2.second - p1.second);
        } else {
            return abs(p2.first - p1.first);
        }
    }


    void sortPoints() {
        sort(points.begin(), points.end(), [](pair<int, int> p1, pair<int, int> p2) {
            if (p1.first == p2.first) {
                return p1.second < p2.second;
            }
            return p1.first < p2.first;
        });


        if (points[0].second > points[1].second) {
            swap(points[0], points[1]);
        }
        if (points[2].second > points[3].second) {
            swap(points[2], points[3]);
        }
    }

public:

    Square(vector<pair<int, int>> pts) : points(pts) {}

    ~Square() {
        points.clear();
    }

    int calculateArea() {
        sortPoints();
        int sideLength = distance(points[0], points[1]);
        return sideLength * sideLength;
    }
};

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        vector<pair<int, int>> points(4);

        for (int i = 0; i < 4; i++) {
            cin >> points[i].first >> points[i].second;
        }

        Square square(points);
        cout << square.calculateArea() << endl;
    }

    return 0;
}
