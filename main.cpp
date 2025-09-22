#include <iostream>
#include <cmath>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    double x;
    double y;
    double A;
    double B;

    cout <<"x = "; cin >> x;
    A = 13.5 - 2 * x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= -1)
        B = exp(0.4+x);
    if (x > -1 && x < 1)
        B = 1 - sin(x) * sin(x);
    if (x >= 1)
        B = cos(x) / (1 + sin(x)*sin(x));
    y = A-B;
    cout << "y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x <= -1) {
        B = exp(0.4 + x);
    } else if (x > -1 && x < 1) {
        B = 1 - sin(x) * sin(x);
    } else {  // x >= 1
        B = cos(x) / (1 + sin(x) * sin(x));
    }
    y = A - B;
    cout << "y = " << y << endl;
    return 0;
}