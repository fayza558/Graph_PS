#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = (a + b - c) / 2;
    int y = (b + c - a) / 2;
    int z = (c + a - b) / 2;
    if ((a + b - c) % 2 != 0 || (b + c - a) % 2 != 0 || (c + a - b) % 2 != 0 ||
        x < 0 || y < 0 || z < 0) {
        cout << "Impossible" << endl;
    } else {
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}

