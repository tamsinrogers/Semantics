/**
 * This program explores all of the possible control flow statements of C++
 * 
 * 10/14/21
 * Nicole Matamoros, Tamsin Rogers, Rayna Hata
 * g++ -o task1cpp task1.cpp
 */

#include <iostream>
using namespace std;

void if_and_else(){
    int x = 100;
    if(x == 100){                   // if statements, if want more than 1 line following the condition need brackets
        cout<<"x is ";
        cout<< x << "\n";
    }

    x = 0;
    if(x == 100)                	// if just 1 line, no brackets are needed but can still be used for clarity
        cout<< "x is 100 \n";
    else if (x == 50)           	// we have else if statements 
        cout << "x is 50 \n";
    else                        	// and else statments
        cout << "x is not 100 or 50";
}

void loop_types(){
    int x = 5;
    while (x > 0){                  // while loop, while condition is true do the thing
        cout << x << " ";
        x = x-1;
    } 

    x = 0;
    cout<<"\n";
    do{                             // similar is do while, do the thing while condition is true
        cout << x << " ";
        x = x+1;
    }while (x < 6);

    cout<<"\n";

    for(int i = x; i >=0; i--){     // for loop: for(initialization, condition, increase)
        cout << i << " ";
    }

    string str = "Hello";
    cout << "\n";
    for(char c: str){               // range for loop:  for(declaration: range)
        cout << "[" << c << "]";
    }

}

void jump_state(){
    for (int i =10; i >0; i--){
        cout<< i << ", ";
        if(i == 4){
            cout<< "countdown aborted";
            break;                          // break - breaks out of loop prematurely
        }
        
    }

    cout << "\n";
    for(int j = 5; j >0; j--){
        if( j == 3) continue;               // continue, skips rest of the loop for this iteration and contiues 
        cout<< j << ", ";           // the next iteration. Need to go before the rest of the loop.
    }
    cout << "liftoff \n";

    int val = 5;
    mylabel:                            // the label      
        cout << val << ", ";    
        val--;
    if (val > 0 )goto mylabel;              // goto, goes to a user defined label
    cout<<"liftoff \n";

}

void switch_state(){
    int x = 5;
    switch(x){                              // switch is similar to a list of if-else statements
        case 1:                             // goes through the diff cases looking for a match
            cout << "x = 1";                // if a match is not found you go with the default.
            break;                          // You need these break statements to prevent any following actions
        case 2:                                     // from occuring. 
            cout << "x is 2";
            break;
        default:
            cout << "the value of x is unknown";
    }
}

int main(){
    cout<< "if and else statements: \n";
    if_and_else();
    cout<< "\n\nDifferent type of Loops: \n ";
    loop_types();
    cout<<"\n\nJump statements: \n";
    jump_state();
    cout<<"\nSwitch statement: \n";
    switch_state();
    
}

