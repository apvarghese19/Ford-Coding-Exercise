//
//  main.cpp
//  2021 Ford Motor Credit Company- Software Engineering Intern
//
//  Exercise Choice 2: Mustang Bronco GUI
//
//  Created by Andrew Varghese on 3/13/21.
//

#include <iostream>
#include <cmath>

using namespace std;

// GUI algorithm
string MustangBronco(int x){
    
    if( x % 3 == 0 && x % 5 == 0){
        return "MustangBronco";
    }
    else if( x % 3 == 0){
        return "Mustang";
    }
    else if( x % 5 == 0){
        return "Bronco";
    }
    else{
        return to_string(x);
    }
    
}

int main() {
    // Main will loop until user wants to quit
    bool run = true;
    while(run){
        
        // Prompt user for a number and run the algorithm
        cout << "Enter a number: ";
        int x;
        cin >> x;
        cout << MustangBronco(x) << endl;
        
        // Loop until User gives a valid Answer (y/n)
        bool run2 = true;
        while(run2){
            
            // Prompt user to try another number
            cout << "Try Again? (y/n): ";
            string ans;
            cin >> ans;
            
            // Handle different user inputs
            if(ans == "y"){
                run2 = false;
                cout << endl;
                continue;
            }
            else if(ans == "n"){
                run = false;
                run2 = false;
            }
            else{
                cout << "Answer must be (Y/N)" << endl;
            }
            
        }
        
    }
    return 0;
}
