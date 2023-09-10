#include <iostream>


int main(){
    using namespace std;

    std::string name;

    cout << "What is your name: "; //prints message to console
    cin >> name; //line to allow user to type in terminal and assigns variable {name} to the user input

    cout << "I think you name is: " << name; //prints to console 
    return 0;
}

//Notes
// Follow this tutorial https://www.youtube.com/watch?v=9VE7p-he4fA&ab_channel=CodeBear to run any c++ file and https://www.youtube.com/watch?v=UPda5iNot-k&ab_channel=senoopsy
//must be run using the terminal not vscode output terminal go to settings > preferences > code runner > code runner:run in terminal
// cout << output
//for cin >> input
//flaw is that when user types more than 1 word so if there is a space in the input then cin only takes whats before the first space

//to take a full user input
#include <string> //needed for getline function
int main(){
    using namespace std;

    string name;
    cout << "What is your full name: ";
    getline(cin,name); //accepts full user input including white spaces and then assigns the input to a variable {name}

    cout << name;
    return 0;
}