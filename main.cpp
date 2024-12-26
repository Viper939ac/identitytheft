#include <iostream>
#include <chrono>
#include <thread>
#include <random>

using namespace std;

int main() {
    cout << "Hello, whats your name? ";
    string name;
    cin >> name;
    if(name == "Jeffery") {
        cout << endl << "HAHHAHAHAHHAA I HAVE APPLIED FOR VARIOUS TYPES FOR CREDIT APPLICATIONS YOU ARE GOING TO BE IN SOOOOOO MUCH DEBT STUPID!" << endl;
        
        // Generate a random delay between 4.5 and 6 seconds
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> dis(4.5, 6.0);
        double delay = dis(gen);

        // Convert delay to milliseconds and sleep
        this_thread::sleep_for(chrono::milliseconds(static_cast<int>(delay * 1000)));

        cout << "THEY ALL JUST GOT ACCEPTED YOUR CREDIT SCORE IS 0 YOU ARE $9,200,000 IN DEBT" << endl;
    } else {
        cout << endl << "Hi, " << name << " my names Jeffery." << endl;
    }
    return 0;
}