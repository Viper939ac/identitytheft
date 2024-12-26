#include <iostream>
using namespace std;
int main(){
    cout << "Hello, whats your name? ";
    string name;
    cin >> name;
    if(name == "Jeffery"){
        cout << endl << "HAHAHAHA i stole your identity im going to put you in so much debt your credit score is already 0!" << endl;
    }
    else{
        cout << endl << "Hi, " << name << " my names Jeffery." << endl;
    }
    return 0;
};