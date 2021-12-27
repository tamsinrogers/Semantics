/**
 * This program explores how functions are treated in C++
 * 
 * 10/14/21
 * Nicole Matamoros, Tamsin Rogers, Rayna Hata
 * g++ -o task2cpp task2.cpp
 */

#include <iostream>
using namespace std;

void samp_funct(int x){          // a function must have a name, that is how this chunck of code is called.
    cout<< "x is " << x << " \n";
}

/*int (){  Not a valid function, you need to name the function
    
}*/ 

void print(void(*f)(int)){      // the argument looks similar to the pointer variable we used in main
    for (int i = 0; i<5;i++){
        (*f)(i);
    }
}

void print(){
    cout<<"This is an example of overloading"; // You can overload functions
    // This means you can name functions the same but differentiate by the parameters
}

int main(){
    cout<< "Calling function with pointer only \n";
    void (*ptr)(int) = &samp_funct;     // can store the pointer for the function. It goes return type (* var name)(parameter)
    (*ptr)(5);                          // and use that pointer to call the function later.
    cout<<"\n\nCalling function as an argument from another function \n";
    print(samp_funct); // we pass in the other function name without the parentheses. 

    print();
}



// The function below is not valid. All user defined fuctions must be declared before main
/*void some_funct(){

}*/