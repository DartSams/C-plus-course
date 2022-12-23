#include <iostream>

namespace first{
    int x = 1;
    char d = 'D';
}

namespace second{
    int x = 6;
}

int main(){

    std::cout << first::d;
    return 0;
}

//Note
//each variable needs a unique name
//if variables have the same name use a namespace
//allows multiple variables to share the same variable name
//c++ version of local and global variables
//// :: is the scope namespace operator if not defined then default local variable is used
// namespace can also be defined within function instead of on each line
    // int main(){
    //     using namespace first;
        
    //     std::cout << x;
    // }

    // same as 
        // int main(){

        //     std::cout << first::d;
        //     return 0;
        // }   

    //cant use namespaces that have the same variable in side them Ex. cant put using namespace first; and using namespace second; in the same function if they have same variable inside them

//save time with standard namespace expert only as you no longer have to write std:: for any builtin function (bad practice for beginners)
    // int main(){
    //     using namespace std;

        // string sentence = "Hello world";
        // cout << sentence
        // return 0
    // }