#include <iostream>

typedef std::string output_t;
typedef int number_t;

int main(){
    output_t name = "Dart";
    std::cout << name << "\n";

    number_t x = 3434;
    std::cout << x;
    return 0;
}

//Notes 
//Ex. typedef {data type} {variable name}_t
//shortcut instead of stating the data type everytime just assign the data type to a variable
//instead of typing std::string use type def as a way of assigning that to a variable 
//conventonal to put any new typedef variable with _t at the end of variable name



using number_t = int;

int main(){
    number_t x = 3434;
    std::cout << x;
    return 0;
}

//Notes
//Ex. using {variable name}_t = {data type}
//using works just the same as typedef but better when working with templatess