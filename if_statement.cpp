#include <iostream>
#include <string> //needed for getline function

int main(){
    using namespace std;
    string name; //declaring variable

    cout << "Enter your nickname: ";
    getline(cin,name); //assigns user input to variable {name}

    if (name == "Maya" || name == "maya"){ //checks if {name} == "dart"
        cout << "Mama";
    } else if (name == "dart"){ //if {name} != "maya" or "Maya" but == "dart"
        cout << "Last name sams";
    } else { //if {name} != "dart" then run block
        cout << "Your name sucks";
    }
    return 0;
}

//Notes
