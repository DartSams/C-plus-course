#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    double a;
    double b;
    double c;

    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    a = pow(a,2);
    b = pow(b,2);
    c = sqrt(a+b);

    cout << c;
    return 0;
}

//Notes
//hypotune function is a^2 + b^2 = c so sqrt of c is the correct side