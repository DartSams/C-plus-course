#include <iostream>


int main(){
    int students = 20;

    students = students + 1;
    students += 1;
    students ++;

    students = students - 1;
    students -= 1;
    students --;

    students = students * 2;
    students *= 2;

    students = students / 2;
    students /= 2;

    students = students % 2; //<- gives the remainder of a division


    std::cout << students;
    return 0;
}

//Note PEMDAS applies
//op quick += for quick addition or ++ (short for quick adding 1 to something)
//op + adds 
//op - subtracts or -- (short for quick subtraction)
//op * multiplication
// || is the or operator (do this or)
// && the and operator