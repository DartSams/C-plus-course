#include <iostream>

int main(){
    int x; //declare the data type and the variable name
    x = 10; //assigne the variable name to a value
    int y = 5;
    int sum = x + y;

    double z = 11.4;

    char grade = 'A';

    bool run = false;

    std::string name = "My name is Dartagnan"; //declaring a string data type and assigning it
    
    std::cout << name << "\n";

    std::cout << name << " I am " << sum << " years old"; //concantination or string literal
    return 0;
}

//Note 
// 2 steps decleration and assignment
//int for whole numbers 
//double number with decimals Ex. 7.5 if int 7.5 c++ rounds down to 7
//char stores  ONLY a single character must use single quotes
//booleans true or false
//string stores more than one character provided from the standard namespace Ex. std::string name = "bye"

//string literal just use << to concantonate multiple variables 