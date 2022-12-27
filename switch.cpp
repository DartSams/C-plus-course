#include <iostream>


int main(){
    using namespace std;

    int month; //declaring variable
    cout << "Enter the month (1-12)" << "\n";
    cin >> month; //assigns user input to the variable {month}

    switch(month){ //checks the variable you pass in for any type
        case 1: //compares the value here {1} to what the variable {month} is (if month == 1 then do this block of code)
            cout << "Its January";
            break;
        case 2:
            cout << "Its February";
            break;
        case 3:
            cout << "Its March";
            break;
        case 4:
            cout << "Its April";
            break;
        default: //runs if none of the other cases match
            cout << "Not a valid month";
            break;
    }
    cout << "\n"; //written to provide a line break between previous code case

    char grade;
    cout << "Enter your letter grade A,B,C,D,F" << "\n";
    cin >> grade;

    switch (grade){
        case 'A':
            cout << "You have a 90-100.";
            break;
        case 'B':
            cout << "You have a 80-90.";
            break;
        case 'C':
            cout << "You have a 70-80.";
            break;
        case 'D':
            cout << "You have a 60-70.";
            break;
        case 'F':
            cout << "You are failing.";
            break;
        default:
            cout << "Not a valid grading scale.";
            break;
    }
    return 0;
}

//Notes
//does not support the logical operator || or && during a case only the first condition is checked at execution 
//switch cases only support checking 1 condition not multiple against a variable
//cases only take data types char,int,enum