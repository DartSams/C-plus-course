#include <iostream>
#include <cmath> //library for math functions

int main(){
    using namespace std;
    double x = 3.14;
    double y = 4;
    double z;

    z = max(x,y);
    z = min(x,y);
    z = pow(2,3); //so 2^3
    z = sqrt(9); //square root of a number
    z = abs(-69); //returns the absolute value of a number away from 0
    z = round(x); //round up
    z = ceil(x); //round up
    z = floor(x); //round down

    cout << z;
    return 0;
}

//Notes 
// cplusplus.com/references/cmath <- for more functions
//max returns the highest value of the parameters included
//min returns the lowest value