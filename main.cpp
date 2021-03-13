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
        cout << "Enter an integer: ";
        double x;
        while (true)
          {
              cin >> x;
              if ((trunc(x) != x) || !cin){
                  cout << "Invalid input, Enter an integer: ";
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  continue;
              }
              else break;
          }
        cout << MustangBronco(x) << endl;
        
        // Loop until User gives a valid Answer (y/n)
        while(true){
            
            // Prompt user to try another number
            cout << "Try Again? (y/n): ";
            string ans;
            cin >> ans;
            // Handle different user inputs
            if(ans == "y"){
                cout << endl;
                break;
            }
            else if(ans == "n"){
                run = false;
                break;
            }
            else{
                cout << "Answer must be (y/n)" << endl;
            }
            
        }
        
    }
    return 0;
}
