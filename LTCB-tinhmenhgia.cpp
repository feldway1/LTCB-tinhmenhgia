#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int sotien, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
    cout << "Nhap so tien can rut:";
    cin >> sotien;
    while (sotien > 0) {
        soto500 = sotien / 500;
        sotien = sotien % 500;
        cout << "So to 500 la " << soto500 << endl;
        soto200 = sotien / 200;
        sotien = sotien % 200;
        cout << "So to 200 la " << soto200 << endl;
        soto100 = sotien / 100;
        sotien = sotien % 100;
        cout << "So to 100 la " << soto100 << endl;
        soto50 = sotien / 50;
        sotien = sotien % 50;
        cout << "So to 50 la " << soto50 << endl;
        soto20 = sotien / 20;
        sotien = sotien % 20;
        cout << "So to 20 la " << soto20 << endl;
        soto10 = sotien / 10;
        sotien = sotien % 10;
        cout << "So to 10 la " << soto10 << endl;
        soto5 = sotien / 5;
        sotien = sotien % 5;
        cout << "So to 5 la " << soto5 << endl;
        soto1 = sotien / 1;
        sotien = sotien % 1;
        cout << "So to 1 la " << soto1 << endl;
    }
    return 0;
}