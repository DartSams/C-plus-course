#include <iostream>


int main(){
    using namespace std;
    int pi = 3.14; //implicit
    double pi = (int) 3.14; //explicit converts value to int and then to a double
    cout << pi;

    char x = 100; //implicit
    cout << x;

    int correct = 8;
    int questions = 10;

    double score = correct / questions * 100; //<- gives a score of 0 because of division 8/10 is not whole so its rounded down before multiplying
    cout << score;

    double score = correct / (double) questions * 100; //converts fraction to double so its not rounded down
    cout << score;
    return 0;
}

//Note
//changes data type to another
//implicit -> changed types automatically
//explicit -> precede value with new data types (int)