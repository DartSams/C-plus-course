#include <iostream>

int main(){
    const double PI = 3.14;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference;
    return 0;
}

//Note
//const means variable doesnt change
//standard to put constant variables in upper case
//terminal defines constant as a read only variable
//works for any data type