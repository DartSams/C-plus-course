#include <iostream> //header file that holds all functions for basic input and ouput operations | used in all files

int main(){
    std::cout << "hello world" << std::endl; //std = standard character output | cout = character output used to display characters as output
    std::cout << "goodbye world" << "\n"; // "\n" same as std::endl but "\n" is better performance wise and faster but takes up memory faster
    std::cout << "maya" << "\n";
    //<< means output (left shift operator when used with numbers)
    //<< std::endl ends this print statement so next can start on new line if not written then next print statement occurs on the previous print statement line (endl is a manipulator)
    

    return 0; //in terminal code = 0 means no problem but if code = 1 is return there is a problem/error
} //main function to run code

////Note
// :: is the scope namespace operator
//https://www.youtube.com/watch?v=-TkoO8Z07hI&ab_channel=BroCode
//To run do run code under dropdown under play button
//manipulator just modifies the text outputted to the console Ex. endl,ends,flush,ws,hex,oct,dec (cleanup) https://www.geeksforgeeks.org/manipulators-in-c-with-examples/