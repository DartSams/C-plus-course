#include <iostream>


int main(){
    using namespace std;
    int num1;
    int num2;
    char op;

    cout << "Enter you first number: ";
    cin >> num1;
    cout << "Enter you second number: ";
    cin >> num2;

    cout << "Enter you logical operator adding(+),subtract(-),multiply(*),divide(/): ";
    cin >> op;

    switch (op){
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Not a valid math operator";
            break;

    }
    return 0;

}

//Notes